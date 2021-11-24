/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:37 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/24 21:35:52 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	array_len;
	unsigned int	ret_val;

	i = 0;
	ret_val = 0;
	array_len = ft_strlen(str);
	while (i < array_len)
		ret_val = (ret_val * 10) + (*(str + i++) - 48);
	return (ret_val);
}
