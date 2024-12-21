/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:10:43 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 15:11:15 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pushf(t_node **from, t_node **to)
{
	t_node	*temp;

	if (*from == NULL)
		return ;
	temp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = temp;
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	pushf(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	pushf(stack_b, stack_a);
	ft_putstr_fd("pb\n", 1);
}
