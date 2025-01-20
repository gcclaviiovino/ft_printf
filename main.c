#include "ft_printf.h"

int	main(void)
{
	char			c = 'c';
	char			*str = "heey";
	int				num = 5;
	int				dec = 420;
	unsigned int	unum = 12;
	int				hex = 231;
	void			*ptr;
	int				len;
	ptr= NULL;

	// len = ft_printf("Hello, World! Character: %c\n");
	// printf("Printed %d characters.\n", len);

	// len = ft_printf("Character: %c\n", c);
	// printf("Printed %d characters.\n", len);

	// len = ft_printf("String: %s\n", str);
	// printf("Printed %d characters.\n", len);

	// len = ft_printf("Integer: %d\n", num);
	// printf("Printed %d characters.\n", len);

	len = ft_printf("Pointer: %p\n", ptr);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Hex Lower: %x\n", hex);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Hex LUpper: %X\n", hex);
	printf("Printed %d characters.\n", len);

	len = ft_printf("Mix:\n pointer: %p, char: %c, string: %s, int: %i, dec: %d, uint: %u, hexl: %x, hexu: %X\n", ptr, c, str, num, dec, unum, hex, hex);
	// len = ft_printf("Mix:\n hexl: %x, hexu: %X, pointer: %p, char: %c, string: %s, int: %i, dec: %d, uint: %u\n", hex, hex, ptr, c, str, num, dec, unum);
	printf("Printed %d characters.\n\n", len);

	len = ft_printf("Altro mix:\n lower: %x\n upper: %X\n", hex, hex);
	printf("Printed %d characters.\n\n", len);

	// len = ft_printf("");
	// printf("Printed %d characters.\n", len);
}