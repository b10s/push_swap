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

	addNode(&lista, 42);
	addNode(&lista, 1);
	addNode(&lista, 2);
	printList(lista);
}


//TODO addNode, rmNode
//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists


//TODO Makefile with mine printf and libft

