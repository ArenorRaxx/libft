/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:47:15 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/30 06:05:12 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
static int	how_many_digits(int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (n < 0)
	{
		n *= -1;
		sign *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i * sign);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		nbcar;
	char	*int_ret;

	sign = 1;
	nbcar = 0;
	if (n == 0)
		return ("0");
	nbcar = how_many_digits(n);
	if (nbcar < 0)
	{
		(unsigned )n *= -1;
		nbcar *= -1;
		sign *= -1;
	}
	int_ret = (char *)ft_calloc(nbcar, sizeof(char));
	if (!int_ret)
		return (NULL);
	while (n > 0)
	{
		int_ret[--nbcar] = (n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
	{
		int_ret[--nbcar] = '-';
	}
	printf("%s\n", int_ret);
	return (int_ret);
}

int main(void)
{
	char *a = ft_itoa(-2147483648);
}