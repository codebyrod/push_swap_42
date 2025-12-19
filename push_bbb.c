/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bbb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:05:47 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/19 03:29:32 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **head_b, t_list **head_a)
{
	t_list *node_first_a;

	if(!*head_a)
		return;
	
	node_first_a = *head_a;
	*head_a = (*head_a)->next;
	node_first_a->next = *head_b;
	*head_b = node_first_a;

}