/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:45:36 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/15 20:10:13 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_stack(t_node **stack, int num)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (errorcheck());
	newnode->value = num;
	newnode->next = *stack;
	*stack = newnode;
	return (0);
}

void	freestack(t_node **stack)
{
	t_node	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

int	is_sorted(t_node *stack_a)
{
	t_node	*cur;

	cur = stack_a;
	while (cur != NULL && cur->next != NULL)
	{
		if (cur->value > cur->next->value)
		{
			return (0);
		}
		cur = cur->next;
	}
	return (1);
}
