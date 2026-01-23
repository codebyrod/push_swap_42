/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:32:57 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/23 07:26:16 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*set_arr_nb(char **strstr, int *control)
{
	int		i;
	int		len;
	long	*arr_nb;

	i = 0;
	if (!strstr)
		handle_free_split(strstr, control);
	len = ft_strlen_arr(strstr);
	arr_nb = malloc(len * sizeof(long));
	if (!arr_nb)
		handle_free_split(strstr, control);
	while (len > i)
	{
		val_dec_places(strstr, control, arr_nb, i);
		arr_nb[i] = ft_atol(strstr[i]);
		i++;
	}
	limit_validation(strstr, control, arr_nb);
	check_dup(strstr, control, arr_nb);
	return (arr_nb);
}

void	val_dec_places(char **strstr, int *control, long *arr_nb, int iter)
{
	int	dec_places;

	dec_places = count_dec_places(strstr[iter]);
	if (dec_places > 11)
		exit_arrl(strstr, control, arr_nb);
}

int	count_dec_places(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			i++;
			count++;
		}
		while (str[i] == '0')
			i++;
		while (str[i])
		{
			i++;
			count++;
		}
	}
	return (count);
}

void	limit_validation(char **strstr, int *control, long *arr_nb)
{
	int	i;

	i = 0;
	while (strstr[i])
	{
		if (arr_nb[i] > 2147483647 || arr_nb[i] < -2147483648)
			exit_arrl(strstr, control, arr_nb);
		i++;
	}
}

void	check_dup(char **strstr, int *control, long *arr_nb)
{
	int	i;
	int	j;
	int	len_arr;

	i = 0;
	j = 1;
	len_arr = ft_strlen_arr(strstr);
	while ((len_arr - 1) > i)
	{
		if (arr_nb[i] == arr_nb[j])
			exit_arrl(strstr, control, arr_nb);
		if (j == (len_arr - 1))
		{
			i++;
			j = i;
		}
		j++;
	}
}
