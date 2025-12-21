/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:33:26 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/21 03:59:40 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new_node(int content)
{
	t_list *node;

	node = calloc(1, sizeof(t_list)); // MUDAR PARA MINHA CALLOC
	if (!node)
		return (0);
	node->content = content;
	node->id = -1;
	node->next = NULL;

	return (node);
}

void	*add_node_back(t_list **head_a, t_list *node)
{
	t_list *current;
	
	if(!(*head_a))
	{
		*head_a = node;
		return (node);
	}
	current = *head_a;
	while (current->next)
		current = current->next;
	current->next = node;

	return (*head_a);
}

// t_list	*put_content(int *ptr, t_list **head_a)
// {

// }

int	*index(int *ptr, int size)
{
	int i;
	int j;
	int x;

	if (ptr[i] > ptr [j])
	{
		x++;
	}
	j++;



	while (i < size)
	{
		while (ptr[i] < ptr[size])
	}
	current = *head_a;

	while (current->next)
	{
		
		current->id = [i];
		current = current->next;
	}

}