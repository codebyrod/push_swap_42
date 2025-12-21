/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:42:57 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/20 23:04:53 by rosousa-         ###   ########.fr       */
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

	// printf("----- TEMP -----\n");
	// printf("Endereço temp: %p\n", &temp);
	// printf("Valor temp: %p\n", temp);
	// printf("----- HEAD_NEXT -----\n");
	// printf("Endereço de head_next: %p\n", &(*head_a)->next);
	// printf("Valor de head_next: %p\n", (*head_a)->next);
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
	
// 	swap_a(&head_a);
// 	return 0;
// }

void	swap_b(t_list **head_b)
{
	t_list *temp;

	if(!*head_b || !(*head_b)->next)
		return;

	temp = (*head_b)->next;
	(*head_b)->next = (*head_b)->next->next;
	temp->next = *head_b;
	head_b = temp;
}