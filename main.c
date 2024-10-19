#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int val;
	struct node *next;
	struct node *prev;
} t_node;

void printList(t_node *root);

//TODO parse args
void main() {
	t_node *lista;

	//TODO err handling
	lista = malloc(sizeof(t_node));
	lista->val = 42;
	lista->next = lista;
	lista->prev = lista;

	printList(lista);
}

//TODO addNode, rmNode
//TODO pushA pushB swapA swapB ..
//TODO shiftA shiftB revA revB ..

//TODO try on 10 elements
//TODO think about even/uneven lists


//TODO Makefile with mine printf and libft

void printList(t_node *root) {
	t_node *node;
	node = root;
	while(node != NULL) {
		//TODO my printf
		printf("%d\n", node->val);
		node = node->next;
		if (node == root) {
			break;
		}
	}
}
