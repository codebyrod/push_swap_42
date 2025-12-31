/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_base_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 05:17:55 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/31 03:50:51 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_five(t_list **head_a, t_list **head_b)
{
	int	len_lst_a;
	int	len_lst_b;

	len_lst_a = ft_lstsize(*head_a);
	if (len_lst_a == 5)
	{
		bring_top(head_a);
		pb(head_a, head_b);
	}
	bring_top(head_a);
	pb(head_a, head_b);
	case_three(head_a);
	len_lst_b = ft_lstsize(*head_b);
	if (len_lst_b == 2)
		pa(head_a, head_b);
	pa(head_a, head_b);
}

void	bring_top(t_list **head_a)
{
	int idx;
	int len_lst;
	int temp;

	if(!(*head_a))
		return;
	len_lst = ft_lstsize(*head_a);
	idx = dist_top(head_a);
	if(idx <= (len_lst / 2))
	{
		while (idx)
		{
			ra(head_a);
			idx--;
		}
	}
	else
	{
		temp = len_lst - idx;
		while (temp)
		{
			rra(head_a);
			temp--;
		}
	}
}

int	dist_top(t_list **head_a)
{
	t_list	*champion;
	t_list	*challenging;
	t_list	*temp;
	int		idx;

	if(!head_a || !(*head_a))
		return(0);
	champion = *head_a;
	challenging = *head_a;
	temp = *head_a;
	idx = 0;
	while (challenging)
	{
		if(champion->id > challenging->id)
			champion = challenging;
		challenging = challenging->next;
	}
	while (temp != champion)
	{
		idx++;
		temp = temp->next;
	}
	return (idx);
}
