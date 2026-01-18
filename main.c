/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:32:30 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 04:36:04 by rosousa-         ###   ########.fr       */
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
	printf("--- DEBUG 1: Antes de unify ---\n");
	// fflush(stdout);
	new_str = unifying_data(argc, argv, control); //MALLOC
	printf("--- DEBUG 2: Depois de unify ---\n");
	fnc_teste_unicacao(new_str, control);
	fflush(stdout); //APAGAR
	len_str = ft_strlen_arr(new_str);
	syntax_validation(new_str); //OK
	arr_nb = set_arr_nb(new_str); //MALLOC
	fnc_teste_arr_nb(new_str, arr_nb);
	fflush(stdout); //APAGAR
	limit_validation(new_str, arr_nb);
	check_dup(new_str, arr_nb);
	put_content(len_str, (int *)arr_nb, &stack_a);
	index_node(&stack_a);
	case_base(len_str, &stack_a, &stack_b);
	sort_stacks(len_str, &stack_a, &stack_b);
	return (0);
}

