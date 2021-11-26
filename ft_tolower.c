/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:30:36 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/26 18:48:14 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	if (chr >= 'A' && chr <= 'Z')
		return ((int)chr + 32);
	return ((int)chr);
}
