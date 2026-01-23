/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:32:30 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/23 07:08:27 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**new_str;
	long	*arr_nb;
	t_var	var;

	stack_a = NULL;
	stack_b = NULL;
	var.nb = 0;
	var.control = &var.nb;
	new_str = unifying_data(argc, argv, var.control);
	var.len_str = ft_strlen_arr(new_str);
	syntax_validation(new_str, var.control);
	arr_nb = set_arr_nb(new_str, var.control);
	if (*var.control)
		free_split(new_str);
	is_ordered(var.len_str, arr_nb);
	put_content(var.len_str, arr_nb, &stack_a);
	index_node(&stack_a);
	def_case(var.len_str, &stack_a, &stack_b);
	final_free(arr_nb, &stack_a);
	return (0);
}

void	is_ordered(int len_lst, long *arr_nb)
{
	int	i;

	i = 0;
	len_lst = len_lst - 1;
	while (len_lst)
	{
		if (arr_nb[i] > arr_nb[i + 1])
			return ;
		i++;
		len_lst--;
	}
	free(arr_nb);
	exit (0);
}
