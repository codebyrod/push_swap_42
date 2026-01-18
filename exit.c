/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:47:17 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 06:52:03 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void exit_split(char **strstr)
{
	free_split(strstr);
	write(1, "Error\n", 6);
	exit (1);
}

void	exit_arr_partial(char **strstr, long *arr_nb)
{
	free(arr_nb);
	exit_split(strstr);
}

void exit_ordered(char **strstr, int *control, long *arr_nb)
{
	if (control)
		free_split(strstr);
	free(arr_nb);
	write(1, "\n", 1);
	exit (1);
}
