/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:46:26 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 15:46:54 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_position(t_node *stack)
{
	int		min_pos;
	int		current_pos;
	int		min_value;
	t_node	*ptr;

	min_pos = 0;
	current_pos = 0;
	min_value = stack->value;
	ptr = stack;
	if (stack == NULL)
		return (-1);
	while (ptr != NULL)
	{
		if (ptr->value < min_value)
		{
			min_value = ptr->value;
			min_pos = current_pos;
		}
		ptr = ptr->next;
		current_pos++;
	}
	return (min_pos);
}

int	find_max_position(t_node *stack)
{
	int		max_pos;
	int		current_pos;
	int		max_value;
	t_node	*ptr;

	max_pos = 0;
	current_pos = 0;
	max_value = stack->value;
	ptr = stack;
	if (stack == NULL)
		return (-1);
	while (ptr != NULL)
	{
		if (ptr->value > max_value)
		{
			max_value = ptr->value;
			max_pos = current_pos;
		}
		ptr = ptr->next;
		current_pos++;
	}
	return (max_pos);
}
