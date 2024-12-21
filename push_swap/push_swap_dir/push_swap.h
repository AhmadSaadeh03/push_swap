/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:08:39 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/21 18:36:27 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*next;
	int				value;
	int				index;
}					t_node;

int		create_stack(t_node **stack, int num);
void	freestack(t_node **stack);
int		is_sorted(t_node *stack_a);
int		errorcheck(void);
int		is_right(int num, char *s);
int		checkdouble(t_node **stack);
int		find_min_position(t_node *stack);
int		find_max_position(t_node *stack);
void	give_index(t_node *stack);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
int		rra(t_node **stack_a);
int		rrb(t_node **stack_b);
int		rrr(t_node **stack_a, t_node **stack_b);
int		ra(t_node **stack_a);
int		rb(t_node **stack_b);
int		rr(t_node **stack_a, t_node **stack_b);
int		sort_three(t_node **stack);
void	sort_four(t_node **stack_a, t_node **stack_b);
void	sort_five(t_node **stack_a, t_node **stack_b);
int		sa(t_node **stack);
int		sb(t_node **stack);
int		ss(t_node **stack_a, t_node **stack_b);
int		lsize(t_node *stack);
int		total_len(int size, char **str1, char *str2);
char	*strjoin_new(int size, char **str1, char *str2);
int		get_max_bits(t_node **stack);
void	radix_sort(t_node **stack_a, t_node **stack_b);
void	free_all_stacks(t_node *stack_a, t_node *stack_b);
#endif
