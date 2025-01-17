SRCFILES = ft_printf.c ft_printf_utils.c ft_printf_ptr_format.c ft_printf_num_formats.c ft_printf_char_formats.c

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
OBJFILES = $(SRCFILES:.c=.o)
NAME = libftprintf.a
LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a
LIBCR = ar rcs
RM = rm -f
CP = cp

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): ${LIBFT} ${OBJFILES}
	$(CP) $(LIBFT) $(NAME)
	$(LIBCR) $(NAME) $(OBJFILES)

clean:
	$(RM) *.o
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME) $(OBJFILES)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
.PHONY: all clean fclean re