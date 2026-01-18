/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:45:31 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 06:44:28 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlen_arr(char **strstr)
{
	int i;

	i = 0;
	if (!strstr)
		return (0);
	while (strstr[i])
		i++;
	return (i);
}

long	ft_atol(char *str)
{
	int         i;
	long		signal;
	long		result;

	result = 0;
	i = 0;
	signal = 1;
	while (str[i])
	{
		while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if(str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
				signal = -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (result * signal);
}

void	is_ordered(char **strstr, int *control, int len_lst, long *arr_nb)
{
	int i;
	
	i = 0;
	len_lst = len_lst - 1;
	while(len_lst)
	{
		if(arr_nb[i] > arr_nb[i + 1])
			return;
		i++;
		len_lst--;
	}
	exit_ordered(strstr, control, arr_nb);
}
