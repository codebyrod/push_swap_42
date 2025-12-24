/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_harness.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:34:47 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 13:03:48 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNÇÕES DE TESTE

#include "push_swap.h"

// TESTE DE MOVIMENTO

void print_stacks(t_list **head_a, t_list **head_b)
{
	t_list *temp_a;
	t_list *temp_b;

	temp_a = *head_a;
	temp_b = *head_b;
	
	printf("---- STACK A\n");
	if(!(*head_a))
	{
		printf("---- STACK A VAZIA\n");
	}
	else
	{
		while(temp_a)
		{
			printf("Val: %d | ID:%d\n", temp_a->content, temp_a->id);
			temp_a = temp_a->next;
		}
	}
	
	printf("---- STACK B\n");
	if (!(*head_b))
	{
		printf("---- STACK B VAZIA\n");
	}
	else
	{
		while(temp_b)
		{
			printf("Val: %d | ID:%d\n", temp_b->content, temp_b->id);
			temp_b = temp_b->next;
		}
	}

}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	int				temp_s1;
	int				temp_s2;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
		{
			temp_s1 = ((int)(((unsigned char *)str1)[i]));
			temp_s2 = ((int)(((unsigned char *)str2)[i]));
			return (temp_s1 - temp_s2);
		}
		i++;
	}
	return (0);
}
