/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:15:35 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/29 16:27:17 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_strcontain(const char *s1, const char c)
{
	while (*s1)
		if (*s1++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	char	*start;
	size_t	len;

	while (*s1 && ft_strcontain(set, *s1))
		s1++;
	start = (char *)s1;
	if (*start == 0)
		return (start);
	while (*s1)
		s1++;
	while (--s1 != start && ft_strcontain(set, *s1))
		;
	len = ++s1 - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start != s1)
		*str++ = *start++;
	*str = 0;
	return (str - len);
}
