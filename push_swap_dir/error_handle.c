/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:15:27 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/15 19:55:03 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	errorcheck(void)
{
	ft_putstr_fd("ERROR\n", 2);
	return (1);
}

int	is_right(int num, char *s)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			errorcheck();
			return (0);
		}
		i++;
	}
	if (s[0] == '+')
		return (1);
	if (ft_strlen(s) != i_len(num))
	{
		errorcheck();
		return (0);
	}
	return (1);
}

int	checkdouble(t_node **stack)
{
	t_node	*cur;
	t_node	*check;

	cur = *stack;
	while (cur != NULL)
	{
		check = cur->next;
		while (check != NULL)
		{
			if (cur->value == check->value)
			{
				errorcheck();
				return (0);
			}
			check = check->next;
		}
		cur = cur->next;
	}
	return (1);
}
