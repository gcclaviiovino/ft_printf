#include "ft_printf.h"

int	main(void)
{
	char			c = 'c';
	char			*str = "heey";
	int				num = 5;
	float			dec = 42.00;
	unsigned int	unum = 12;
	int				hex = 231;
	void			*ptr;
	int				len;

	len = ft_printf("Hello, World!\n");
	printf("Printed %d characters.\n", len);

	len = ft_printf("Character: %c\n", c);
	printf("Printed %d characters.\n", len);

	len = ft_printf("String: %s\n", str);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Integer: %d\n", num);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Pointer: %p\n", ptr);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Hex Lower: %x\n", hex);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Hex LUpper: %X\n", hex);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Mix: char : %c, string : %s, int : %d, pointer : %p\n", c, str, num, ptr);
	printf("Printed %d characters.\n\n", len);

	len = ft_printf("");
	printf("Printed %d characters.\n", len);
}
