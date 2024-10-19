/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:51:09 by aenshin           #+#    #+#             */
/*   Updated: 2024/10/20 00:01:09 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	swap(t_node **head_ptr)
{
	int	val1;
	int	val2;

	if (head_ptr == NULL)
		print_err_and_exit();
	if (*head_ptr == NULL)
		return;
	if ((*head_ptr)->next == *head_ptr)
		return;
	val1 = rm_node(head_ptr);
	val2 = rm_node(head_ptr);
	add_node(head_ptr, val1);
	add_node(head_ptr, val2);
}

void	swapa(t_node **lista_ptr)
{
	//TODO my printf
	printf("sa\n");
	swap(lista_ptr);
}

void	swapb(t_node **listb_ptr)
{
	//TODO my printf
	printf("sb\n");
	swap(listb_ptr);
}

void	swapab(t_node **lista_ptr, t_node **listb_ptr)
{
	//TODO my printf
	printf("ss\n");
	swap(lista_ptr);
	swap(listb_ptr);
}
