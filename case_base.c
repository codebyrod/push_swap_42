/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 02:24:31 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/21 02:35:13 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_base(t_list **head_a, t_list **head_b)
{
	size_t len_lista;
	if (len_lista <= 5 && len_lista > 3)
		case_five(head_a, head_b);
	else if (len_lista == 3)
		case_three(head_a, head_b);
	else if (len_lista == 2)
		case_two(head_a, head_b);
}

void	case_two(t_list **head_a, t_list **head_b)
{
	
}