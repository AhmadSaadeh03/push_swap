/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:25:31 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/16 18:25:53 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (lsize(*stack) < 2)
		return (-1);
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

int	rra(t_node **stack_a)
{
	reverse(stack_a);
	ft_putstr_fd("rra\n", 1);
	return (0);
}

int	rrb(t_node **stack_b)
{
	reverse(stack_b);
	ft_putstr_fd("rrb\n", 1);
	return (0);
}

int	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_putstr_fd("rrr\n", 1);
	return (0);
}
