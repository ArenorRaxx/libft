/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:37 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/26 17:53:39 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	ret_val;
	size_t	array_len;

	i = 0;
	sign = 1;
	ret_val = 0;
	array_len = ft_strlen(str);
	if (*str == '-')
	{
		sign *= -1;
		i++;
	}
	while (i < array_len)
		ret_val = (ret_val * 10) + ((long *)(str + i++) - 48);
	return ((int)(ret_val * sign));
}
