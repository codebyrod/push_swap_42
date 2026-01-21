/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:54 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/21 01:23:24 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				id;
	int				content;
	int				len_str;
	int				nb;
	struct s_list	*next;
}	t_list;

typedef struct s_var
{
	int		*control;
	int		len_str;
	int		nb;
}	t_var;

void	*add_node_back(t_list **head_a, t_list *node);
char	*put_content_split(char const *str, int len);
void	*free_split_partial(char **str, int count);
void	*free_split(char **str);
t_list	*new_node(int content);
long	*set_arr_nb(char **str, int *control);
char	**ft_split(char const *str, char delimiter);
char	**unifying_data(int argc, char *argv[], int *control);
int		biggest_id(t_list **head);
void	bring_top(t_list **head_a);
void	case_five(t_list **head_a, t_list **head_b);
void	case_two(t_list **head_a);
void	case_three(t_list **head_a);
void	check_dup(char **strstr, int *control, long *arr_nb);
int		count_dec_places(char *str);
int		count_bit(int max_id);
void	def_case(int len_list, t_list **head_a, t_list **head_b);
int		dist_top(t_list **head_a);
void	exit_arrl(char **strstr, int *control, long *arr_nb);
void	exit_stack_partial(long *arr_nb, t_list **head_a);
void	final_free(long *arr_nb, t_list **stack_a);
void	first_str_empty(char *str);
void	free_stack(t_list **stack_a);
long	ft_atol(char *str);
int		ft_lstsize(t_list *lst);
int		ft_strlen(char *strstr);
int		ft_strlen_arr(char **strstr);
void	handle_free_split(char **new_str, int *control);
void	index_node(t_list **head_a);
void	is_ordered(int len_lst, long *arr_nb);
int		letter_count(char const *str, char delimiter);
void	limit_validation(char **strstr, int *control, long *arr_nb);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
int		position_biggest_id(t_list **head);
void	push_a(t_list **head_a, t_list **head_b);
void	push_b(t_list **head_a, t_list **head_b);
void	put_content(int len_array, long *ptr, t_list **head_a);
void	radix_sort(t_list **head_a, t_list **head_b);
void	sa(t_list **head_a);
void	sb(t_list **head_b);
void	ss(t_list **head_a, t_list **head_b);
void	swap_a(t_list **head_a);
void	swap_b(t_list **head_b);
void	syntax_validation(char **new_str, int *control);
void	ra(t_list **head_a);
void	rb(t_list **head_b);
void	reverse_rotate_a(t_list **head_a);
void	reverse_rotate_b(t_list **head_b);
void	rotate_a(t_list **head_a);
void	rotate_b(t_list **head_b);
void	rr(t_list **head_a, t_list **head_b);
void	rra(t_list **head_a);
void	rrb(t_list **head_b);
void	rrr(t_list **head_a, t_list **head_b);
void	val_dec_places(char **strstr, int *control, long *arr_nb, int iter);
int		word_count(char const *str, char delimiter);
















#endif
