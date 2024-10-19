/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:30:53 by aenshin           #+#    #+#             */
/*   Updated: 2024/10/20 00:07:03 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

//TODO parse args
void main() {
	t_node *lista;

	lista = NULL;
	add_node(&lista, 42);
	add_node(&lista, 1);
	add_node(&lista, 2);
	print_list(lista);

	swap(&lista);
	print_list(lista);

	printf("rm node with val [%d]\n", rm_node(&lista));
	printf("rm node with val [%d]\n", rm_node(&lista));
	printf("rm node with val [%d]\n", rm_node(&lista));
	print_list(lista);

	printf("swap\n");
	swapa(&lista);
	print_list(lista);
}


//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists

//TODO Makefile with mine printf and libft
