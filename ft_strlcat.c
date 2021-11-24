/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:50:31 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 15:48:38 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;
	unsigned char	*str;
	unsigned char	*dest;

	len = ft_strlen(dst);
	i = dstsize - len;
	dest = (unsigned char *)(dst + len);
	str = (unsigned char *)src;
	while (--i)
		*dest++ = *str++;
	*dest = '\0';
	return (len + len - i);
}
