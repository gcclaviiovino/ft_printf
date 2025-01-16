/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr_format.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:46:10 by liovino           #+#    #+#             */
/*   Updated: 2025/01/16 16:56:03 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prefix(char **pointer)
{
	*pointer = ft_strjoin("0x", *pointer);
	return (2);
}

int	fill_ptr(char **pointer, uintptr_t num)
{
	char	*add;
	int		count;

	count = 0;
	count += prefix(pointer);
	add = ft_uitoa_base(num, 16);
	*pointer = ft_strjoin(*pointer, add);
	count += ft_strlen(add);
	return (count);
}

int	print_point(void *pointer)
{
	int			len;
	uintptr_t	address;
	char		*out;

	address = (uintptr_t)pointer;
	printf("add: %zu\n", address);
	len = 0;
	if (address == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (ft_strlen("(nil)"));
	}
	out = (char *) malloc(sizeof(char) * 1);
	if (!out)
		return (0);
	out[0] = '\0';
	len += fill_ptr(&out, address);
	ft_putstr_fd(out, 1);
	return (len);
}