/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:33:26 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 03:45:56 by rosousa-         ###   ########.fr       */
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

void	put_content(int len_array, int *ptr, t_list **head_a)
{
	t_list *node;
	if(!ptr)
		return;

	int i;
	i = 0; 
	while (i < len_array)
	{
		node = new_node(ptr[i]);
		add_node_back(head_a, node);
		i++;
	}
}

void	index_node(t_list **head_a)
{
	int		i;
	t_list	*current;
	t_list	*other;

	if (!*head_a)
		return;
	current = *head_a;
	other = *head_a;
	i = 0;
	while (current)
	{
		while (other)
		{
			if(current->content > other->content)
				i++;
			other = other->next;
		}
		other = *head_a;
		current->id = i;
		i = 0;
		current = current->next;
	}
}
