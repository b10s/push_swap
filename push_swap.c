/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:21:54 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:26:50 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*list_a;
	t_node	*list_b;
	int		arr_len;
	int		i;
	int		*remap;
	int		bits;
	int		stack_b_len;
	int		j;

	stack_b_len = 0;
	list_a = NULL;
	list_b = NULL;
	arr_len = argc - 1;
	if (argc < 2)
		return (0);
	if (args_are_valid(argc, argv) != 1)
		print_err_and_exit();
	remap = buble_sort(argc, argv);
	if (remap == NULL)
		print_err_and_exit();
	i = 0;
	while (++i < argc)
		if (remap[i - 1] == remap[i])
			print_err_and_exit();
	if (sorted(argc, argv) == 1)
		return (0);
	list_a = parse_args(argc, argv, remap);
	if (argc - 1 <= 5)
	{
		simple_sort(list_a, list_b, argc - 1);
		return (0);
	}
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
	free_list(list_a);
	free(remap);
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
