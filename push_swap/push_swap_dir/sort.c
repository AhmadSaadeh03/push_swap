/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:51:53 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 15:46:14 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_three(t_node **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a < b && b > c && c > a)
	{
		sa(stack);
		ra(stack);
	}
	else if (b < a && a < c && b < c)
		sa(stack);
	else if (b < c && c < a && a > b)
		ra(stack);
	else if (c < a && a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (c < b && b > a && a > c)
		rra(stack);
	return (1);
}

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min_pos;

	min_pos = find_min_position(*stack_a);
	if (min_pos == 1)
		sa(stack_a);
	else if (min_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_pos == 3)
		rra(stack_a);
	pb(stack_b, stack_a);
	sort_three(stack_a);
	pa(stack_b, stack_a);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	max_pos;

	max_pos = find_max_position(*stack_a);
	if (max_pos == 1)
		sa(stack_a);
	else if (max_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (max_pos == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (max_pos == 4)
	{
		rra(stack_a);
	}
	pb(stack_b, stack_a);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a);
	ra(stack_a);
}
