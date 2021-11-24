/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:02:59 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 16:14:29 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dest;

	str = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (n-- > 0)
		*(dest + n) = *(str + n);
	return (dst);
}
