/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:31:47 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 06:01:18 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk(int size_chunck, t_list **head_a, t_list **head_b)
{
	int chunk;
	int iter;
	
	if (size_chunck <= 100 && size_chunck > 19)
		chunk = 20;
	else if(size_chunck <= 19)
		chunk = 5;
	else
		chunk = 45;
	while (chunk <= size_chunck)
	{
		iter = ft_lstsize(*head_a);
		while(iter)
		{
			if ((*head_a)->id < chunk)
				pb(head_a, head_b);
			else
				ra(head_a);
			iter--;
		}
		chunk += chunk;
	}
}

void    big_to_top_b(t_list **head_b)
{
	int posit_big;
	int len_lst;
	int iter;

	posit_big = position_biggest_id(head_b);
	len_lst = ft_lstsize(*head_b);
	if((len_lst / 2) > posit_big)
	{
		iter = posit_big;
		while (iter)
		{
			rb(head_b);
			iter--;
		}
	}
	else
	{
		iter = len_lst - posit_big;
		while(iter)
		{
			rrb(head_b);
			iter--;
		}
	}
}

void	send_to_a(t_list **head_a, t_list **head_b)
{
	int len_lst;
	
	len_lst = ft_lstsize(*head_b);
	while (len_lst)
	{
		big_to_top_b(head_b);
		pa(head_a, head_b);
		len_lst--;
	}
}

void	sort_stacks(int size_chunck, t_list **head_a, t_list **head_b)
{
	chunk(size_chunck, head_a, head_b);
	big_to_top_b(head_b);
	send_to_a(head_a, head_b);
}




