/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:47:17 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/20 16:26:20 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_split(char **strstr)
{
	(void)strstr;
	write(2, "Error\n", 6);
	exit (1);
}

void	exit_arr_partial(char **strstr, int *control, long *arr_nb)
{
	free(arr_nb);
	if (*control)
		handle_free_split(strstr, control);
	write(2, "Error\n", 6);
	exit (1);
}

void	exit_stack_partial(long *arr_nb, t_list **head_a)
{
	free(arr_nb);
	free_stack(head_a);
	write(2, "Error\n", 6);
	exit (1);
}
