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

	printf("push\n");
	push_a(&lista, &listb);
	print_list(lista);
	print_list(listb);

	push_b(&lista, &listb);
	print_list(lista);
	print_list(listb);

	printf("rotate\n");
	rotate_a(&lista);
	print_list(lista);
	rotate_b(&listb);
	print_list(listb);
	rotate_ab(&lista, &listb);
	print_list(lista);
	print_list(listb);

	printf("revers rotate\n");
	reverse_rotate_a(&lista);
	print_list(lista);
	reverse_rotate_b(&listb);
	print_list(listb);
	reverse_rotate_ab(&lista, &listb);
	print_list(lista);
	print_list(listb);

	printf("rm node with val [%d]\n", rm_node(&lista));
	rotate_a(&lista);
	print_list(lista);
	printf("rm node with val [%d]\n", rm_node(&lista));
	rotate_a(&lista);
	print_list(lista);
}


//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists

//TODO Makefile with mine printf and libft
