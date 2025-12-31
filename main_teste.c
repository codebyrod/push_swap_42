/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:54:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/12/31 05:07:53 by rosousa-         ###   ########.fr       */
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
	int case5[] = {3, 4, 1, 2, 5};
	// int	case_radix[] = {6, 4, 5, 2, 1, 3, 0};
	// int	case_radix[] = {6, 4, 5, 2, 1, 3, 0};
	// 100 números em até 1100 operações e 500 números em até 8500 operações
	// 100 números em até 700 operações e 500 números em até 11500 operações
	// 100 números em até 1300 operações e 500 números em até 5500 operações
// 	int case_radix[] = {
//     42, 385, 129, 476, 12, 399, 255, 76, 432, 101,
//     213, 510, 488, 32, 167, 445, 289, 90, 56, 312,
//     603, 203, 77, 145, 364, 22, 198, 405, 111, 65,
//     234, 477, 89, 123, 345, 499, 12, 267, 98, 321,
//     88, 176, 254, 33, 412, 785, 6, 290, 487, 7,
//     356, 132, 444, 23, 87, 642, 401, 55, 199, 323,
//     14, 465, 211, 78, 301, 109, 515, 450, 265, 187,
//     9, 398, 232, 144, 67, 311, 489, 178, 54, 421,
//     278, 34, 548, 433, 99, 210, 466, 122, 387, 45,
//     243, 80, 165, 309, 418, 59, 299, 376, 11, 491
// };

int case_radix[] = {
    423, 12, 385, 499, 56, 129, 476, 255, 76, 432,
    101, 213, 8, 488, 32, 167, 445, 289, 90, 312,
    498, 203, 77, 145, 364, 22, 198, 405, 111, 65,
    234, 477, 89, 123, 345, 12, 267, 98, 321, 88,
    176, 254, 33, 412, 155, 6, 290, 487, 7, 356,
    132, 444, 23, 87, 276, 401, 55, 199, 323, 14,
    465, 211, 78, 301, 109, 28, 450, 265, 187, 9,
    398, 232, 144, 67, 311, 489, 178, 54, 421, 278,
    34, 156, 433, 99, 210, 466, 122, 387, 45, 243,
    80, 165, 309, 418, 59, 299, 376, 11, 491, 5,
    392, 18, 467, 222, 81, 354, 118, 62, 284, 409,
    15, 495, 251, 95, 333, 71, 183, 429, 27, 458,
    139, 368, 50, 295, 115, 3, 472, 218, 85, 341,
    162, 43, 272, 484, 105, 389, 30, 415, 240, 74,
    192, 305, 455, 13, 358, 207, 60, 441, 128, 379,
    93, 259, 149, 46, 318, 479, 1072, 396, 21, 280,
    438, 102, 347, 189, 53, 462, 229, 84, 329, 112,
    2, 494, 169, 372, 248, 69, 425, 135, 292, 403,
    39, 159, 448, 205, 75, 337, 125, 482, 269, 902,
    360, 181, 26, 419, 142, 381, 236, 64, 453, 196,
    303, 17, 350, 471, 107, 256, 48, 436, 152, 286,
    393, 72, 2015, 492, 117, 365, 29, 185, 407, 245,
    96, 314, 459, 137, 1000, 274, 423, 61, 325, 480,
    164, 383, 200, 52, 263, 443, 119, 343, 8, 497,
    225, 70, 410, 147, 297, 38, 194, 370, 250, 83,
    468, 113, 335, 174, 41, 282, 456, 104, 352, 209,
    66, 4027, 158, 395, 238, 79, 316, 486, 25, 131,
    362, 219, 47, 440, 180, 270, 94, 327, 474, 16,
    253, 386, 127, 408, 202, 58, 288, 463, 108, 340,
    191, 36, 416, 148, 308, 452, 231, 73, 3074, 5,
    493, 160, 261, 434, 121, 355, 242, 86, 294, 400,
    49, 179, 422, 134, 369, 216, 68, 319, 470, 24,
    140, 390, 227, 91, 331, 457, 106, 249, 382, 44,
    168, 413, 283, 57, 195, 446, 114, 304, 461, 10,
    351, 184, 266, 428, 77, 223, 485, 31, 359, 136,
    397, 244, 100, 315, 478, 19, 153, 437, 206, 63,
    298, 406, 1026, 346, 171, 37, 496, 235, 82, 332,
    451, 293, 4, 377, 146, 417, 258, 110, 275, 402,
    51, 188, 320, 464, 212, 97, 336, 161, 439, 262,
    20, 367, 197, 426, 116, 247, 483, 103, 281, 40,
    388, 130, 449, 224, 60, 310, 473, 150, 268, 15,
    344, 490, 204, 71, 420, 175, 287, 404, 30, 124,
    361, 237, 89, 454, 190, 313, 481, 27, 157, 264,
    411, 233, 42, 375, 143, 300, 4060, 11, 217, 338,
    49, 182, 4301, 257, 95, 322, 475, 166, 296, 394,
    226, 55, 442, 138, 279, 40, 193, 353, 485, 109,
    241, 380, 14, 306, 414, 228, 65, 328, 469, 120,
    252, 371, 186, 447, 208, 39, 291, 430, 101, 348,
    154, 33, 3084, 214, 498, 75, 2600, 424, 141, 317,
    54, 455, 230, 92, 363, 170, 334, 489, 20, 273
};



	int len_case2 = 2;
	int len_case3 = 3;
	int len_case5 = 5;
	int len_case7 = 500;

	printf("--- POPULANDO LISTA ---\n");
	put_content(len_case7, case_radix, &stack_a);
	// put_content(len, arr2, &stack_b);
	index_node(&stack_a);
	// print_stacks(&stack_a, &stack_b);
	// printf("entrou no case_base\n");
	// case_base(len_case5, &stack_a, &stack_b); //DESCOMENTAR;
	radix_sort(&stack_a, &stack_b);
	// printf("entrou e saiu do case_base\n");
	// print_stacks(&stack_a, &stack_b);
	
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