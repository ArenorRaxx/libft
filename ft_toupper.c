/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:20:17 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 16:17:12 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	if (chr >= 'a' && chr <= 'z')
		return ((int)chr - 32);
	return ((int)chr);
}
