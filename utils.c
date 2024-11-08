/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:49:08 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 00:51:10 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_node	*parse_args(int argc, char *argv[], int *remap);
void	print_list(t_node *root);
void	print_err_and_exit(void);
int		list_len(t_node	*list);
int		find_idx(int val, int *remap, int len);

t_node	*parse_args(int argc, char *argv[], int *remap)
{
	t_node	*list;
	int		val;
	int		i;

	list = NULL;
	i = argc - 1;
	while (i > 0)
	{
		val = ft_atoi(argv[i]);
		val = find_idx(val, remap, argc - 1);
		add_node(&list, val);
		i--;
	}
	return (list);
}

int	find_idx(int val, int *remap, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (val == remap[i])
			return (i);
		i++;
	}
	return (-1);
}

void	print_err_and_exit(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	list_len(t_node	*list)
{
	t_node	*head;
	t_node	*cur;
	int		res;

	if (list == NULL)
		return (0);
	res = 1;
	head = list;
	cur = list;
	while (head != cur->prev)
	{
		res++;
		cur = cur->prev;
	}
	return (res);
}
