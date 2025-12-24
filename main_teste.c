/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:54:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/24 14:23:27 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//MAIN DE TESTE

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;


// TESTE MOVIMENTOS
	int arr[] = {4, 3, 5, 1, 2};
	int arr2[] = {9, 6, 8, 7, 10};
	int len = 5;

// TESTE CASE_BASE
	int case2[] = {21, 14};
	int case3[] = {81, 27, 9};
	int case5[] = {15, 75, 20, 5, 10};
	int len_case2 = 2;
	int len_case3 = 3;
	int len_case5 = 5;

	printf("--- POPULANDO LISTA ---\n");
	put_content(len_case5, case5, &stack_a);
	// put_content(len, arr2, &stack_b);
	index_node(&stack_a);
	print_stacks(&stack_a, &stack_b);
	printf("entrou no case_base\n");
	case_base(len_case5, &stack_a, &stack_b);
	printf("entrou e saiu do case_base\n");
	print_stacks(&stack_a, &stack_b);
	
	if (argc >= 2 && ft_strncmp(argv[1],"pa", 2) == 0)
	{
		printf("\n--- TESTE: PA (Push A) ---\n");
		pa(&stack_a, &stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"pb", 2) == 0)
	{
		printf("\n--- TESTE: PB (Push B) ---\n");
		pb(&stack_a, &stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"sa", 2) == 0)
	{
		printf("\n--- TESTE: SA (Swap A) ---\n");
		sa(&stack_a);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"sb", 2) == 0)
	{
		printf("\n--- TESTE: SB (Swap B) ---\n");
		sb(&stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"ss", 2) == 0)
	{
		printf("\n--- TESTE: SS (Swap AB) ---\n");
		ss(&stack_a, &stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"ra", 2) == 0)
	{
		printf("\n--- TESTE: RA (Rotate A) ---\n");
		ra(&stack_a);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"rb", 2) == 0)
	{
		printf("\n--- TESTE: RB (Rotate B) ---\n");
		rb(&stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"rer", 2) == 0)
	{
		printf("\n--- TESTE: RR (Rotate AB) ---\n");
		rr(&stack_a, &stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"rra", 3)  == 0)
	{
		printf("\n--- TESTE: RRA (Reverse Rotate A) ---\n");
		rra(&stack_a);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"rrb", 3)  == 0)
	{
		printf("\n--- TESTE: RRB (Reverse Rotate B) ---\n");
		rrb(&stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	if (argc >= 2 && ft_strncmp(argv[1],"rrr", 3)  == 0)
	{
		printf("\n--- TESTE: RRR (Reverse Rotate AB) ---\n");
		rrr(&stack_a, &stack_b);
		print_stacks(&stack_a, &stack_b);
	}

	return (0);
}