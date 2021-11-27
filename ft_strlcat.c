/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:50:31 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/27 15:44:32 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dest;
	char		*str;
	size_t		size;
	size_t		dstlen;

	dest = dst;
	str = (char *)src;
	size = dstsize;
	while (size-- != 0 && *dest != 0)
		dest++;
	dstlen = dest - dst;
	size = dstsize - dstlen;
	if (size == 0)
		return (dstlen + ft_strlen(str));
	while (*str != '\0')
	{
		if (size-- != 1)
			*dest++ = *str;
		str++;
	}
	*dest = '\0';
	return (dstlen + (str - src));
}
