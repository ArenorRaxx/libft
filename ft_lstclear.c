/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 23:18:19 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/30 23:29:09 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	int		len;
	t_list	*cur_nod;

	len = ft_lstsize(*lst);
	while (len--)
	{
		cur_nod = *lst;
		*lst = cur_nod->next;
		del(cur_nod->content);
		free(cur_nod);
	}
	free(*lst);
}
