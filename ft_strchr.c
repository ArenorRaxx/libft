/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:33:07 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 16:43:29 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	patt;
	unsigned char	*str;

	patt = (unsigned char)c;
	str = (unsigned char *)s;
	while (*str != patt)
		str++;
	return (*str);
}
