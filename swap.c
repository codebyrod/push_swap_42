/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:42:57 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 02:41:59 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **head_a)
{
	t_list *temp;

	if(!*head_a || !(*head_a)->next)
		return;

	temp = (*head_a)->next;
	(*head_a)->next = (*head_a)->next->next; 
	temp->next = *head_a;
	*head_a = temp;
}

void	swap_b(t_list **head_b)
{
	t_list *temp;

	if(!*head_b || !(*head_b)->next)
		return;

	temp = (*head_b)->next;
	(*head_b)->next = (*head_b)->next->next;
	temp->next = *head_b;
	*head_b = temp;
}

void	sa(t_list **head_a)
{
	swap_a(head_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **head_b)
{
	swap_b(head_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **head_a, t_list **head_b)
{
	swap_a(head_a);
	swap_b(head_b);
	write(1, "ss\n", 3);
}