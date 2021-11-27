/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:26:37 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/27 19:36:49 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*ret_pointer;
	size_t	slen;
	size_t	size;

	size = len + 1;
	slen = ft_strlen(s);
	ret_pointer = (char *)ft_calloc(size, sizeof(char));
	if (!ret_pointer)
		return (NULL);
	else if (slen > start && slen >= len)
	{
		src = (char *)(s + start);
		ft_strlcpy(ret_pointer, src, size);
	}
	return (ret_pointer);
}
