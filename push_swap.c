/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:30:53 by aenshin           #+#    #+#             */
/*   Updated: 2024/10/20 00:14:29 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

//TODO parse args
void main() {
	t_node *lista;
	t_node *listb;

	lista = NULL;
	listb = NULL;

	add_node(&lista, 42);
	add_node(&lista, 0);
	add_node(&lista, 50);
	print_list(lista);

	add_node(&listb, 1);
	add_node(&listb, 2);
	add_node(&listb, 3);
	print_list(listb);

	printf("swap\n");
	swapab(&lista, &listb);
	print_list(lista);
	print_list(listb);

	swapa(&lista);
	print_list(lista);

	swapb(&listb);
	print_list(listb);

	printf("rm node with val [%d]\n", rm_node(&lista));
	printf("rm node with val [%d]\n", rm_node(&lista));
	print_list(lista);
}


//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists

//TODO Makefile with mine printf and libft
