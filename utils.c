/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:02:38 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/05 22:58:49 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atol(char *str)
{
	long	i;
	int		signal;
	int		result;

	result = 0;
	signal = 1;
	while (str[i])
	{
		if(str[i] == ' ' || str[i] >= 9 || str[i] <= 13)
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
		return (result * signal);
	}
}
