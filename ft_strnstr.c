/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:06:36 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/27 15:55:28 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	cmp;
	int	needle_len;

	i = 0;
	cmp = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0' || needle == haystack)
		return ((char *)haystack);
	while (*haystack && (len - i++ - needle_len) > 0)
	{
		cmp = ft_strncmp(haystack, needle, needle_len);
		if (cmp == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
