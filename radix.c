/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:31:47 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/31 04:19:18 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **head_a, t_list **head_b)
{
	int max_id;
	int count;
	int	i;
	int size_lst_a;

	i = 0;
	max_id = biggest_id(head_a);
	count = count_bit(max_id);
	while (i < count)
	{
		size_lst_a = ft_lstsize(*head_a);
		while (size_lst_a)
		{
			if((((*head_a)->id >> i) & 1) == 0)
			{
				pb(head_a, head_b);
				print_stacks(head_a, head_b);
			}
			else
			{
				ra(head_a);
				print_stacks(head_a, head_b);
			}
			size_lst_a--;
		}
		while (*head_b)
			pa(head_a, head_b);
		i++;
	}
}

int	count_bit(int max_id)
{
	int count;
	int displaced;

	count = 0;
	while (max_id != 0)
	{
		displaced = max_id >> 1;
		max_id = displaced;
		count++;
	}
	return (count);
}
