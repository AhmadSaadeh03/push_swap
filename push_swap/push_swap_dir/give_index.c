/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:57:32 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/14 18:57:50 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_node *stack)
{
	t_node	*tmp;
	t_node	*buff;
	int		counter;

	tmp = stack;
	buff = stack;
	while (buff)
	{
		counter = 0;
		tmp = stack;
		while (tmp)
		{
			if (tmp->value <= buff->value)
				counter++;
			tmp = tmp->next;
		}
		buff->index = counter;
		buff = buff->next;
	}
}
