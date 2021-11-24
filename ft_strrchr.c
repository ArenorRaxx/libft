/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:44:25 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 17:13:35 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	unsigned char	patt;
	unsigned char	*str;

	len = ft_strlen(s);
	patt = (unsigned char)c;
	str = (unsigned char *)s;
	while (--len != 0)
		if (str[len] == patt)
			return ((char *)str[len]);
	return (NULL);
}
