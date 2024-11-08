/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:51:45 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:07:32 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sort_3(t_node **stack_a);
int		get_min(t_node *stack, int val);
void	sort_4(t_node **stack_a, t_node **stack_b);
void	sort_3_norm(t_node **stack_a);

void	simple_sort(t_node *list_a, t_node *list_b, int len)
{
	if (len == 2)
		swapa(&list_a);
	else if (len == 3)
		sort_3(&list_a);
	else if (len == 4)
		sort_4(&list_a, &list_b);
	else if (len == 5)
		sort_5(&list_a, &list_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(*stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (distance == 4)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a))
		return ;
	push_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(*stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a) == 1)
		return ;
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_3(t_node **stack_a)
{
	t_node	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(*stack_a, -1);
	next_min = get_min(*stack_a, min);
	if (head->val == min && head->prev->val != next_min)
	{
		rotate_a(stack_a);
		swapa(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (head->val == next_min)
	{
		if (head->prev->val == min)
			swapa(stack_a);
		else
			reverse_rotate_a(stack_a);
	}
	else
	{
		printf("aaa");
		sort_3_norm(stack_a);
	}
}

void	sort_3_norm(t_node **stack_a)
{
	t_node	*head;
	int		min;

	head = *stack_a;
	min = get_min(*stack_a, -1);
	if (head->prev->val == min)
		rotate_a(stack_a);
	else
	{
		swapa(stack_a);
		reverse_rotate_a(stack_a);
	}
}
