/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 04:35:29 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 03:55:58 by rosousa-         ###   ########.fr       */
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

int	biggest_id(t_list **head)
{
	t_list	*champion;
	t_list	*challenging;

	if(!head || !(*head))
		return(0); //E ESSE RETURN?
	champion = *head;
	challenging = *head;
	while (challenging)
	{
		if(champion->id < challenging->id)
			champion = challenging;
		challenging = challenging->next;
	}
	return (champion->id);
}

int	position_biggest_id(t_list **head)
{
	t_list	*champion;
	t_list	*challenging;
	int     idx_champion;
	int     idx_challenging;

	idx_champion = 0;
	idx_challenging = 1;
	if(!head || !(*head))
		return(-1);
	champion = *head;
	challenging = (*head)->next;
	while (challenging)
	{
		if(champion->id < challenging->id)
		{
			idx_champion = idx_challenging;
			champion = challenging;
		}
		challenging = challenging->next;
		idx_challenging++;
	}
	return (idx_champion);
}


