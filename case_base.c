/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:24:31 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 14:29:36 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_base(int len_list, t_list **head_a, t_list **head_b)
{
	if (len_list <= 5 && len_list > 3)
		case_five(head_a, head_b);
	else if (len_list == 3)
		case_three(head_a, head_b);
	else if (len_list == 2)
		case_two(head_a, head_b);
}

void	case_two(t_list **head_a, t_list **head_b) //APAGAR HEAD_B
{
	t_list *temp_a;

	temp_a = *head_a;
	if(temp_a->id > temp_a->next->id)
		sa(head_a);
}

void	case_three(t_list **head_a, t_list **head_b)
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
	case_two(head_a, head_b); // APAGAR HEAD_B
}

void	case_five(t_list **head_a, t_list **head_b)
{
	t_list *min;
	int i;

	i = 0;

	printf("antes da ATRIBUIÇÃO: MIN_SEARCH\n");
	min = min_search(head_a);
	printf("depois da ATRIBUIÇÃO: MIN_SEARCH\n");

	while (*head_a != min)
		i++;
	printf("valor de i: %d", i);
	

}
t_list	*min_search(t_list **head_a)
{
	t_list	*current;
	t_list	*other;
	t_list	*min;

	current = *head_a;
	other = *head_a;
	printf("começo do while da min\n");
	while (current->next && other->next)
	{
		if(current->id < other->next->id)
		{
			min = current;
			other = other->next;
		}
		else
		{
			min = other->next;
			current = current->next;
			other = other->next;
		}
	}
	printf("FIM: MIN_SEARCH\n");
	return (min);
}
