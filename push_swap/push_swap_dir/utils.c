/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <asaadeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:57:10 by asaadeh           #+#    #+#             */
/*   Updated: 2024/12/21 18:52:58 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lsize(t_node *stack)
{
	size_t	i;
	t_node	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	total_len(int size, char **str1, char *str2)
{
	int	i;
	int	total_len;
	int	str2_len;

	str2_len = ft_strlen(str2);
	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_strlen(str1[i++]);
	total_len += (size - 2) * str2_len + 1;
	return (total_len);
}

char	*strjoin_new(int size, char **str1, char *str2)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(total_len(size, str1, str2) * sizeof(char));
	if (!s)
		exit(1);
	i = 1;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (str1[i][j])
			s[c++] = str1[i][j++];
		j = 0;
		while (str2[j] && i < size - 1)
			s[c++] = str2[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
