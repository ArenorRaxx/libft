/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:55:38 by mcorso            #+#    #+#             */
/*   Updated: 2021/11/30 23:31:30 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur_nod;

	i = 0;
	while (lst != NULL)
	{
		i++;
		cur_nod = lst;
		lst = (t_list *)cur_nod->next;
	}
	return (i);
}
