/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 00:17:15 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 02:56:14 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **head_a)
{
	t_list *current;
	t_list *penul;

	if (!(*head_a) || !(*head_a)->next)
		return; 

	current = *head_a;

	while(current->next->next)
		current = current->next;
	penul = current;
	current = current->next;
	current->next = *head_a;
	*head_a = current;
	penul->next = NULL;
}

void	reverse_rotate_b(t_list **head_b)
{
	t_list *current;
	t_list *penul;

	if(!(*head_b) || !((*head_b)->next))
		return;
	
	current = *head_b;

	while (current->next->next)
		current = current->next;
	penul = current;
	current = current->next;
	current->next = *head_b;
	*head_b = current;
	penul->next = NULL;
}

void	rra(t_list **head_a)
{
	reverse_rotate_a(head_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **head_b)
{
	reverse_rotate_b(head_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	reverse_rotate_a(head_a);
	reverse_rotate_b(head_b);
	write(1, "rrr\n", 4);
}