/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:20:48 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:20:49 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	is_sorted(t_node **stack)
{
	t_node	*head;
	t_node	*tmp;

	head = *stack;
	tmp = *stack;
	tmp = tmp->prev;
	while (head != tmp)
	{
		if (tmp->val < tmp->next->val)
			return (0);
		tmp = tmp->prev;
	}
	return (1);
}

int	get_distance(t_node **stack, int index)
{
	t_node	*head;
	t_node	*tmp;
	int		distance;

	distance = 0;
	head = *stack;
	if (head->val == index)
		return (distance);
	tmp = *stack;
	distance++;
	tmp = tmp->prev;
	while (head != tmp)
	{
		if (tmp->val == index)
			break ;
		distance++;
		tmp = tmp->prev;
	}
	return (distance);
}
