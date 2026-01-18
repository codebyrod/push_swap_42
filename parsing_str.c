/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:47:33 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/17 23:47:43 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **unifying_data(int argc, char *argv[], int *control)
{
	char **new_str;

	if (argc == 2)
	{
		new_str = ft_split(argv[1], ' ');
		if(!new_str)
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		*control = 1;
	}
	else if (argc > 2)
		new_str = &argv[1];
	else
	{
		write(1, "\n", 1);
		exit (1);
	}
	return (new_str);
}

void	syntax_validation(char **new_str)
{
	int i;
	int j;
	
	i = 0;
	while(new_str[i])
	{
		j = 0;
		while (new_str[i][j])
		{
			if (new_str[i][j] == '-' || new_str[i][j] == '+')
			{
				if (j != 0)
					exit_split(new_str);
				if (new_str[i][j + 1] < '0' || new_str[i][j + 1] > '9')
					exit_split(new_str);
			}
			else if (new_str[i][j] < '0' || new_str[i][j] > '9')
				exit_split(new_str);
			j++;
		}
		i++;
	}
}
