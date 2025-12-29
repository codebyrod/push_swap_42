/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:24:31 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/29 05:49:29 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_base(int len_list, t_list **head_a, t_list **head_b)
{
	if (len_list <= 5 && len_list > 3)
		case_five(head_a, head_b);
	else if (len_list == 3)
		case_three(head_a);
	else if (len_list == 2)
		case_two(head_a);
}

void	case_two(t_list **head_a)
{
	t_list *temp_a;

	temp_a = *head_a;
	if(temp_a->id > temp_a->next->id)
		sa(head_a);
}

void	case_three(t_list **head_a)
{
	int a;
	int b;
	int c;

	a = (*head_a)->id;
	b = (*head_a)->next->id;
	c = (*head_a)->next->next->id;

	if(a > b && a > c)
		ra(head_a);
	else if (b > a && b > c)
		rra(head_a);
	case_two(head_a);
}


