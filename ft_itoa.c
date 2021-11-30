/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:47:15 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/30 17:37:38 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	how_many_digits(int n)
{
	int		i;
	long	num;

	i = 0;
	num = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		nbcar;
	char	*int_ret;
	long	num;

	num = (long)n;
	sign = 1;
	nbcar = 0;
	nbcar = how_many_digits(n);
	if (n < 0)
		sign *= -1;
	int_ret = (char *)ft_calloc(nbcar + 1, sizeof(char));
	if (n == 0)
		int_ret[0] = '0';
	if (!int_ret)
		return (NULL);
	while (nbcar && n)
	{
		int_ret[--nbcar] = ((num * sign) % 10) + '0';
		num /= 10;
	}
	if (sign < 0)
		int_ret[nbcar] = '-';
	return (int_ret);
}

// int main()
// {
// 	char *a = ft_itoa(9);
// 	char *b = ft_itoa(-9);
// 	char *c = ft_itoa(8415);
// 	char *d = ft_itoa(-8415);	
// 	printf("%s, %s, %s, %s\n", a, b, c, d);
// }