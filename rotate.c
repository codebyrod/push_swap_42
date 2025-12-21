/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 23:05:41 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/21 00:17:27 by rosousa-         ###   ########.fr       */
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

// int main()
// {
// 	t_list *head_a;
// 	t_list *n1;
// 	t_list *n2;
// 	t_list *n3;
	
// 	head_a = calloc(1, sizeof(t_list));
// 	n1 = calloc(1, sizeof(t_list));
// 	n2 = calloc(1, sizeof(t_list));
// 	n3 = calloc(1, sizeof(t_list));

// 	head_a->content = 0;
// 	n1->content = 1;
// 	n2->content = 2;
// 	n3->content = 3;

// 	head_a->next = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;
	
// 	rotate_a(&head_a);
// 	return 0;
// }

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

void	rr(t_list **head_a, t_list **head_b)
{
	rotate_a(head_a);
	rotate_b(head_b);
}