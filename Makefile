SRCFILES = ft_printf.c ft_printf_utils.c ft_printf_ptr_format.c ft_printf_num_formats.c ft_printf_char_formats.c

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -Ilibft
OBJFILES = $(SRCFILES:.c=.o)
NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBCR = ar rcs
RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${LIBFT} ${NAME}

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): ${OBJFILES}
	$(LIBCR) $(NAME) $(OBJFILES) $(LIBFT)

clean:
	$(RM) *.o
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME) $(OBJFILES)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
.PHONY: all clean fclean re