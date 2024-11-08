/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:19:47 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:20:23 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	free_list(t_node *list)
{
	t_node	*head;
	t_node	*tmp;

	head = list;
	tmp = list;
	tmp = tmp->prev;
	while (tmp != head)
	{
		free(tmp->next);
		tmp = tmp->prev;
	}
}
