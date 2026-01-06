/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:33:32 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/06 01:57:50 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	int i;
	int j;

	i = 0;

	char **new_str;
	char *str;

	//VERIFICAR ARGS
	if (argc == 2)
	{
		new_str = ft_split(argv[1], ' ');
		if(!new_str)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	else if (argc > 2)
		new_str = &argv[1];
	else
		write(1, '\n', 1);

	//VERIFICA ARRAY
	while(new_str[i])
	{
		str = new_str[i];
		j = 0;
		while(str[j])
		{
			if(str[j] == '+' || str[j] == '-')
			{
				if(j > 0)
					return (1);
				j++;
			}
			if(str[j] < '0' || str[j] > '9')
				return (1);
			j++;
		}
		i++;
	}

	// put_content(len_case7, case_radix, &stack_a);
	// index_node(&stack_a);
	// case_base(len_case5, &stack_a, &stack_b);
	// radix_sort(&stack_a, &stack_b);
	
	return (0);
}
