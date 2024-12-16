/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:55:18 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 16:32:27 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (lsize(*stack) < 2)
		return (-1);
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	last->next = first;
	first->next = NULL;
	return (0);
}

int	ra(t_node **stack_a)
{
	if (rotate(stack_a) == 0)
		ft_putstr_fd("ra\n", 1);
	return (0);
}

int	rb(t_node **stack_b)
{
	if (rotate(stack_b) == 0)
		ft_putstr_fd("rb\n", 1);
	return (0);
}

int	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr\n", 1);
	return (0);
}
