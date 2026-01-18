/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:32:30 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 06:43:28 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;
	int nb;
	int *control;
	char **new_str;
	long *arr_nb;
	int len_str;
	
	nb = 0;
	control = &nb;	
	new_str = unifying_data(argc, argv, control);
	len_str = ft_strlen_arr(new_str);
	syntax_validation(new_str);
	arr_nb = set_arr_nb(new_str);
	is_ordered(new_str, control, len_str, arr_nb);
	put_content(len_str, (int *)arr_nb, &stack_a);
	index_node(&stack_a);
	def_case(len_str, &stack_a, &stack_b);
	final_free(new_str, control, arr_nb, &stack_a);
	return (0);
}

