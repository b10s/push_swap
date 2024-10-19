#include "./push_swap.h"

//TODO parse args
void main() {
	t_node *lista;

	lista = NULL;

	//TODO err handling
	//lista = malloc(sizeof(t_node));
	//lista->val = 42;
	//lista->next = lista;
	//lista->prev = lista;

	add_node(&lista, 42);
	add_node(&lista, 1);
	add_node(&lista, 2);
	print_list(lista);
	rm_node(&lista);
	rm_node(&lista);
	print_list(lista);
}


//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists


//TODO Makefile with mine printf and libft

