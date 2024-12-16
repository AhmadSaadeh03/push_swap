/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:25:01 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 18:57:25 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_node **stack)
{
	t_node	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->value;
	max_bits = 0;
	while (head)
	{
		if (head->value > max)
			max = head->value;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	radix(t_node **stack_a, t_node **stack_b, int current_bit, int size)
{
	t_node	*head_a;
	int		j;

	j = 0;
	while (j++ < size)
	{
		head_a = *stack_a;
		if (((head_a->index >> current_bit) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_b, stack_a);
	}
	while (lsize(*stack_b) != 0)
		pa(stack_b, stack_a);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	size;
	int	max_bits;

	i = 0;
	size = lsize(*stack_a);
	max_bits = get_max_bits(stack_a);
	give_index(*stack_a);
	while (i < max_bits)
	{
		radix(stack_a, stack_b, i, size);
		i++;
		if (is_sorted(*stack_a))
			break ;
	}
}
