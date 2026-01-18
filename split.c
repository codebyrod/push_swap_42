/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:47:24 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 00:47:53 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split(char const *str, char delimiter)
{
	char	**new_str;
	int		number_word;
	int		number_letter;
	int		i;
	
	i = 0;
	if(!str)
		exit (1);
	number_word = word_count(str, delimiter);
	new_str = malloc ((number_word + 1) * sizeof(char *));
	if (!new_str)
		exit (1);
	while (number_word > i)
	{
		while (*str && *str == delimiter)
			str++;
		number_letter = letter_count(str, delimiter);
		new_str[i] = put_content_split(str, number_letter);
		if(!new_str[i])
			return (free_split_partial(new_str, i));
		str = &str[number_letter];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

int	word_count(char const *str, char delimiter)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if(!str)
		return (0);
	while (str[i])
	{
		if(str[i] != delimiter && (i == 0 || str[i - 1] == delimiter))
			count++;
		i++;
	}
	return (count);
}

int	letter_count(char const *str, char delimiter)
{
	int	i;

	i = 0;
	if(!str)
		return (0);
	while (str[i] && str[i] != delimiter)
		i++;
	return (i);
}

//APAGAR OU UTILIZAR?
char	*put_content_split(char const *str, int len)
{
	int i;
	char *new_str;

	i = 0;
	if(!str)
		return (0);
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while(len > i)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}


