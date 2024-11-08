/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:07:13 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:17:15 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_3(t_node **stack_a);
int		get_min(t_node *stack, int val);
void	sort_4(t_node **stack_a, t_node **stack_b);
void	sort_3_norm(t_node **stack_a);

int	get_min(t_node *stack, int val)
{
	t_node	*head;
	t_node	*tmp;
	int		min;

	head = stack;
	tmp = stack;
	min = 6;
	if ((tmp->val < min) && tmp->val != val)
		min = tmp->val;
	tmp = tmp->prev;
	while (head != tmp)
	{
		if ((tmp->val < min) && tmp->val != val)
			min = tmp->val;
		tmp = tmp->prev;
	}
	return (min);
}

int	*buble_sort(int argc, char *argv[])
{
	int	*res;
	int	i;
	int	j;
	int	x;

	res = malloc(sizeof(int) * (argc - 1));
	i = -1;
	while (++i < argc - 1)
		res[i] = ft_atoi(argv[i + 1]);
	i = -1;
	while (++i < argc - 2)
	{
		j = -1;
		while (++j < argc - 2)
		{
			if (res[j] > res[j + 1])
			{
				x = res[j];
				res[j] = res[j + 1];
				res[j + 1] = x;
			}
		}
	}
	return (res);
}

int	sorted(int argc, char *argv[])
{
	int	i;
	int	pre;
	int	cur;

	i = 1;
	while (i < argc)
	{
		pre = ft_atoi(argv[i - 1]);
		cur = ft_atoi(argv[i]);
		if (pre > cur)
			return (0);
		i++;
	}
	return (1);
}
