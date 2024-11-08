/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:21:54 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:34:02 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	big_sort(int argc, t_node *list_a, t_node *list_b);

int	main(int argc, char *argv[])
{
	t_node	*list_a;
	t_node	*list_b;
	int		i;
	int		*remap;

	list_a = NULL;
	list_b = NULL;
	if (argc < 2)
		return (0);
	if (args_are_valid(argc, argv) != 1)
		print_err_and_exit();
	remap = buble_sort(argc, argv);
	i = 0;
	while (++i < argc)
		if (remap[i - 1] == remap[i])
			print_err_and_exit();
	if (sorted(argc, argv) == 1)
		return (0);
	list_a = parse_args(argc, argv, remap);
	if (argc - 1 <= 5)
		simple_sort(list_a, list_b, argc - 1);
	else
		big_sort(argc, list_a, list_b);
	free_list(list_a);
	free(remap);
}

void	big_sort(int argc, t_node *list_a, t_node *list_b)
{
	int		bits;
	int		i;
	int		stack_b_len;
	int		j;

	bits = calc_bits(argc - 1);
	i = -1;
	while (++i < bits)
	{
		stack_b_len = 0;
		j = -1;
		while (++j < argc - 1)
		{
			if (((list_a->val >> i) & 1) == 0)
			{
				push_b(&list_a, &list_b);
				stack_b_len++;
			}
			else
				rotate_a(&list_a);
		}
		j = -1;
		while (++j < stack_b_len)
			push_a(&list_a, &list_b);
	}
}

int	calc_bits(int len)
{
	int	res;
	int	bits;

	res = 2;
	bits = 2;
	while (1 == 1)
	{
		if (res == len)
			return (bits);
		if (res > len)
			return (bits - 1);
		res = res * 2;
		bits++;
	}
	return (bits);
}
