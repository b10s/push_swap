#include "./push_swap.h"

void	push_a(t_node **lista, t_node **listb)
{
	int			val_b;
	t_node	*headb;

	//TODO use my printf
	printf("pa\n");
	if (listb == NULL)
		print_err_and_exit();
	headb = *listb;
	if (headb == NULL)
		return;
	val_b = rm_node(listb);
	add_node(lista, val_b);
}

void	push_b(t_node **lista, t_node **listb)
{
	int			val_a;
	t_node	*heada;

	//TODO use my printf
	printf("pb\n");
	if (lista == NULL)
		print_err_and_exit();
	heada = *lista;
	if (heada == NULL)
		return;
	val_a = rm_node(lista);
	add_node(listb, val_a);
}
