/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:25 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/19 03:32:18 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_b(t_list **head_a, t_list **head_b)
{
	if(!head_a)
		return;

	t_list *node_first_a;
 	node_first_a = *head_a;
	*head_a = (*head_a)->next;
	if (!*head_b)
	{
		*head_b = node_first_a;
		(*head_b)->next = NULL;
	} 
	else
	{
		node_first_a->next = *head_b;
		*head_b = node_first_a;
	} 
	ft_putendl("pb", 1); //colocar essa função ou colocar minha printf;
}
