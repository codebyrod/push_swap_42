/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 04:35:29 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/29 05:18:50 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	// if (lst && lst->next == NULL)
	// 	return (1);
	
	int i;

	i = 0;

	t_list *current;
	current = lst;

	while (current)
	{
		current = current->next;
		i++;
	}

	return (i);
}