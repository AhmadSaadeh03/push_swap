/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:27:02 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/16 19:42:17 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sort_stack(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (!stack_a || !(*stack_a))
	{
		errorcheck();
		return (1);
	}
	size = lsize(*stack_a);
	if (size == 0)
	{
		errorcheck();
		return (1);
	}
	else if (size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	return (1);
}

static int	initialize_stacks(char **argv, t_node **stack_a)
{
	int	num;
	int	i;

	i = 0;
	while (argv[i] != NULL)
		i++;
	while (i-- > 0)
	{
		if (!is_right(ft_atoi(argv[i]), argv[i]))
		{
			freestack(stack_a);
			return (1);
		}
		num = ft_atoi(argv[i]);
		if (create_stack(stack_a, num) == 1)
			return (1);
	}
	if (!checkdouble(stack_a))
	{
		freestack(stack_a);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**numbers;
	char	*join;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	join = strjoin_new(argc, argv, " ");
	if (!join)
		return (1);
	numbers = ft_split(join, ' ');
	free(join);
	if (!numbers)
		return (1);
	if (!initialize_stacks(numbers, &stack_a))
	{
		ft_free(numbers);
		return (1);
	}
	ft_free(numbers);
	if (is_sorted(stack_a))
	{
		freestack(&stack_a);
		freestack(&stack_b);
		return (1);
	}
	give_index(stack_a);
	sort_stack(&stack_a, &stack_b);
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}
