/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:37:05 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 16:33:19 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_node **stack)
{
	t_node	*first;
	t_node	*sec;
	int		temp;

	if (lsize(*stack) < 2)
		return (-1);
	first = *stack;
	sec = first->next;
	temp = sec->value;
	sec->value = first->value;
	first->value = temp;
	return (0);
}

int	sa(t_node **stack_a)
{
	if (swap(stack_a) == 0)
		ft_putstr_fd("sa\n", 1);
	return (0);
}

int	sb(t_node **stack_b)
{
	if (swap(stack_b) == 0)
		ft_putstr_fd("sb\n", 1);
	return (0);
}

int	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 1);
	return (0);
}
