/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:14:51 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/03 21:30:42 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	i = *lst;
	i = ft_lstlast(i);
	(i)->next = new;
}
