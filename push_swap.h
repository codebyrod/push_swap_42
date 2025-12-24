/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:54 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 14:17:35 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h> //APAGAR
#include <unistd.h>

typedef struct s_list
{
	int id;
	int content;
	struct s_list *next;
} t_list;

//MOVIMENTOS // APAGAR
void	push_a(t_list **head_a, t_list **head_b);
void	push_b(t_list **head_a, t_list **head_b);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
void	swap_a(t_list **head_a);
void	swap_b(t_list **head_b);
void	sa(t_list **head_a);
void	sb(t_list **head_b);
void	ss(t_list **head_a, t_list **head_b);
void	rotate_a(t_list **head_a);
void	rotate_b(t_list **head_b);
void	ra(t_list **head_a);
void	rb(t_list **head_b);
void	rr(t_list **head_a, t_list **head_b);
void	rotate_a(t_list **head_a);
void	rotate_b(t_list **head_b);
void	ra(t_list **head_a);
void	rb(t_list **head_b);
void	rr(t_list **head_a, t_list **head_b);
void	reverse_rotate_a(t_list **head_a);
void	reverse_rotate_b(t_list **head_b);
void	rra(t_list **head_a);
void	rrb(t_list **head_b);
void	rrr(t_list **head_a, t_list **head_b);

///CASO BASE // APAGAR
void	case_base(int len_list, t_list **head_a, t_list **head_b);
void	case_five(t_list **head_a, t_list **head_b);
void	case_three(t_list **head_a, t_list **head_b);
// void	case_three_aux(t_list **head_a, t_list **head_b);
void	case_two(t_list **head_a, t_list **head_b);
t_list	*min_search(t_list **head_a);

//CRIAR NÓS E COLOCAR NO FINAL
t_list	*new_node(int content);
void	*add_node_back(t_list **head_a, t_list *node);

// INDEX
void	put_content(int len_array, int *ptr, t_list **head_a);
void	index_node(t_list **head_a);

// FUNÇÕES DE TESTE
void print_stacks(t_list **head_a, t_list **head_b);
int main(int argc, char **argv);
int	ft_strncmp(const char *str1, const char *str2, size_t n);


#endif
