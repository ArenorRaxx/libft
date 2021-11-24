/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:28:37 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 16:16:34 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*str;
	unsigned char	*dest;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i++ < dstsize)
		*(dest + i - 1) = *(str + i - 1);
	*(dest + i - 1) = '\0';
	return (i);
}
