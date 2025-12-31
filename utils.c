/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 04:35:29 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/31 03:50:54 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return (0);
	t_list *current;
	current = lst;
	while (current)
	{
		current = current->next;
		i++;
	}

	return (i);
}

int	biggest_id(t_list **head_a)
{
	t_list	*champion;
	t_list	*challenging;
	t_list	*temp;
	int		idx;

	if(!head_a || !(*head_a))
		return(0);
	champion = *head_a;
	challenging = *head_a;
	temp = *head_a;
	idx = 0;
	while (challenging)
	{
		if(champion->id < challenging->id)
			champion = challenging;
		challenging = challenging->next;
	}
	return (champion->id);
}