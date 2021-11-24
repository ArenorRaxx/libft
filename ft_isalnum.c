/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:36:43 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 16:20:05 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned int	ta;
	unsigned int	tb;

	ta = ft_isalpha(c);
	tb = ft_isdigit(c);
	if (ta || tb)
		return (1);
	return (0);
}
