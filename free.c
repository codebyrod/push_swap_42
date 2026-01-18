/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:21:19 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 05:06:31 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack_a)
{
	t_list	*current;
	t_list	*temp_next;

	if(!stack_a)
		return ;
	current = *stack_a;
	while (current)
	{
		temp_next = current->next;
		free(current);
		current = temp_next;
	}
	*stack_a = NULL;
}

void	*free_split_partial(char **str, int count)
{
	int	i;

	i = 0;
	if(!str)
		return (NULL);
	while(i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

void	*free_split(char **str)
{
	int	i;

	i = 0;
	if(!str)
		return (NULL);
	while(str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

void	final_free(char **strstr, int *control, long* arr_nb, t_list **stack_a)
{
	if (*control)
		free_split(strstr);
	free(arr_nb);
	free_stack(stack_a);
}





