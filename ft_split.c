/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:54:04 by mcorso            #+#    #+#             */
/*   Updated: 2021/12/01 20:40:38 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_word(const char *str, char c)
{
	int	nwords;
	int	trigger;

	nwords = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			nwords++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (nwords);
}

static char	*word_calc(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)ft_calloc(finish - start + 1, sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**spret;

	i = 0;
	j = 0;
	index = -1;
	spret = (char **)malloc((c_word(s, c) + 1) * sizeof(char *));
	if (!s || !spret)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			spret[j++] = word_calc(s, index, i);
			index = -1;
		}
		i++;
	}
	spret[j] = 0;
	return (spret);
}
