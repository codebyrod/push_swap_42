/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:25 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/23 20:48:00 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **head_a, t_list **head_b)
{
	t_list *node_first_a;
	if(!head_a)
		return;
 	node_first_a = *head_a;
	*head_a = (*head_a)->next;
	node_first_a->next = *head_b;
	*head_b = node_first_a;
}

void	push_a(t_list **head_a, t_list **head_b)
{
	t_list *node_first_b;
	if(!*head_b)
		return;
	node_first_b = *head_b;
	*head_b = (*head_b)->next;
	node_first_b->next = *head_a;
	*head_a = node_first_b;
}

void	pa(t_list **head_a, t_list **head_b)
{
	push_a(head_a, head_b);
	write(1, "pa\n", 3);
}

void	pb(t_list **head_a, t_list **head_b)
{
	push_b(head_a, head_b);
	write(1, "pb\n", 3);
}

