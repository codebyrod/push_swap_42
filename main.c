/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:33:32 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/10 00:43:17 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;
	t_list *node;

	node = stack_a;

	long num;

	int i;
	int j;
	int k;
	int *control_free;
	int bin;
	
	
	bin = 0;

	i = 0;
	k = 0;
	*control_free = 0;

	char **new_str;
	char *str;

	//CONSTROI MATRIZ DE ARRAY (OU ARRAY DE ARRAY OU LISTA DE ARRAY)
	new_str = unifying_data(argc, argv, control_free);

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
				{
					aux_error(stack_a, new_str, control_free);
					return (1);
				}
				j++;
			}
			if(str[j] < '0' || str[j] > '9')
			{
				aux_error(stack_a, new_str, control_free);
				return (1);
			}
			j++;
		}
		num = check_valid_num(stack_a, new_str, i, control_free);
		if (!num)
			return (1);

		//SETANDO NUMEROS NOS NÓS
		node = new_node((int)num);
		if (!node)
		{
			free_stack(stack_a);
			if (control_free)
				free_split(new_str);
			write(2, "Error\n", 6);
			return (1);
		}
		add_node_back(stack_a, node);
		i++;
	}
	if(control_free)
		free_split(new_str);
	// put_content(len_case7, case_radix, &stack_a);
	// index_node(&stack_a);
	// case_base(len_case5, &stack_a, &stack_b);
	// radix_sort(&stack_a, &stack_b);
	
	return (0);
}


int signal_validation(char **new_str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(new_str[i])
	{
		while (new_str[i][j])
		{
			if (new_str[i][j] == '-' || new_str[i][j] == '+')
			{
				if (j != 0)
				{
					if(new_str[i][j - 1] != ' ')
						return (1); // 1 == ERRO;
				}
				if (new_str[i][j + 1] < '0' || new_str[i][j + 1] > '9')
					return (1); // ERRO;
			}
			j++;
		}
		i++;
	}
	return (0);
}

char **unifying_data(int argc, char *argv[], int *control)
{
	char **new_str;

	if (argc == 2)
	{
		new_str = ft_split(argv[1], ' ');
		if(!new_str)
		{
			write(2, "Error\n", 6);
			return ((void *)0);
		}
		*control = 1;
	}
	else if (argc > 2)
		new_str = &argv[1];
	else
	{
		write(1, "\n", 1);
		return ((void *)0);
	}
	return (new_str);
}


int	check_valid_num(t_list **stack_a, char **str_str, int iter, int *control)
{
	long	num;
	long	num_temp;
	int		i;

	num = ft_atol(str_str[iter]);
	if(num > 2147483647 || num < -2147483648)
	{
		aux_error(&stack_a, str_str, control);
		return (NULL);
	}
	i = iter + 1;
	while (str_str[i])
	{
		num_temp = ft_atol(str_str[i]);
		if (num == num_temp)
		{
			aux_error(&stack_a, str_str, control);
			return (NULL);
		}
		i++;
	}
	return (num);
}
