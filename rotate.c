/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 23:05:41 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/21 02:12:42 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head_a)
{
	t_list	*current;
	t_list	*temp;

	if(!*head_a || !(*head_a)->next)
		return;
		current = *head_a;
	temp = (*head_a)->next;
	while(current->next)
		current = current->next;
	current->next = *head_a;
	(*head_a)->next = NULL;
	*head_a = temp;
}

void	rotate_b(t_list **head_b)
{
	t_list *current;
	t_list *temp;

	if (!(*head_b) || !(*head_b)->next)
		return;

	temp = (*head_b)->next;
	current = *head_b;
	while(current->next)
		current = current->next;
	current->next = *head_b;
	(*head_b)->next = NULL;
	*head_b = temp;
}

void	ra(t_list **head_a)
{
	rotate_a(head_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **head_b)
{
	rotate_b(head_b);
	write(1, "rb\n", 3);
}


void	rr(t_list **head_a, t_list **head_b)
{
	rotate_a(head_a);
	rotate_b(head_b);
	write(1, "rr\n", 3);
}