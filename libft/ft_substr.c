/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:45:18 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:30:58 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i_st;
	unsigned int	i;
	size_t			len_str;

	i_st = start;
	i = -1;
	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (len > len_str)
		len = len_str;
	if (len == 0 || start >= len_str)
		len = 0;
	else if (start + len > len_str)
		len = len_str - start;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (++i < len && s[i] != '\0')
		sub[i] = s[i_st + i];
	sub[i] = '\0';
	return (sub);
}
