/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:01:54 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/20 20:37:32 by rosousa-         ###   ########.fr       */
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
void	def_case(int len_list, t_list **head_a, t_list **head_b);
void	case_two(t_list **head_a);
void	case_three(t_list **head_a);
void	case_five(t_list **head_a, t_list **head_b);
void	bring_top(t_list **head_a);
int		dist_top(t_list **head_a);
t_list	*new_node(int content);
void	*add_node_back(t_list **head_a, t_list *node);
void	put_content(int len_array, long *ptr, t_list **head_a);
void	index_node(t_list **head_a);
int		ft_lstsize(t_list *lst);
int		position_biggest_id(t_list **head);
void	is_ordered(int len_lst, long *arr_nb);
char	**ft_split(char const *str, char delimiter);
int		word_count(char const *str, char delimiter);
int		letter_count(char const *str, char delimiter);
char	*put_content_split(char const *str, int len);
void	*free_split_partial(char **str, int count);
void	*free_split(char **str);
void	free_stack(t_list **stack_a);
void	final_free(long *arr_nb, t_list **stack_a);
void	exit_split(char **strstr);
void	exit_arr_partial(char **strstr, int *control, long *arr_nb);
void	exit_stack_partial(long *arr_nb, t_list **head_a);
long	ft_atol(char *str);
char	**unifying_data(int argc, char *argv[], int *control);
void	syntax_validation(char **new_str, int *control);
long	*set_arr_nb(char **str, int *control);
int		ft_strlen_arr(char **strstr);
int		ft_strlen(char *strstr);
void	limit_validation(char **strstr, int *control, long *arr_nb);
void	val_dec_places(char **strstr, int *control, long *arr_nb, int iter);
int		count_dec_places(char *str);
void	check_dup(char **strstr, int *control, long *arr_nb);
void	handle_free_split(char **new_str, int *control);
void	radix_sort(t_list **head_a, t_list **head_b);
int		count_bit(int max_id);
int		biggest_id(t_list **head);
void	first_str_empty(char *str);

#endif
