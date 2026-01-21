/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:24:31 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/19 01:15:11 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	def_case(int len_lst, t_list **head_a, t_list **head_b)
{
	if (len_lst > 5)
		radix_sort(head_a, head_b);
	else if (len_lst <= 5 && len_lst > 3)
		case_five(head_a, head_b);
	else if (len_lst == 3)
		case_three(head_a);
	else if (len_lst == 2)
		case_two(head_a);
}

void	case_two(t_list **head_a)
{
	t_list	*temp_a;

	temp_a = *head_a;
	if (temp_a->id > temp_a->next->id)
		sa(head_a);
}

void	case_three(t_list **head_a)
{
	int	a;
	int	b;
	int	c;

	a = (*head_a)->id;
	b = (*head_a)->next->id;
	c = (*head_a)->next->next->id;
	if (a > b && a > c)
		ra(head_a);
	else if (b > a && b > c)
		rra(head_a);
	case_two(head_a);
}
