#include "./push_swap.h"

void	push_a(t_node **lista, t_node **listb)
{
	int			val_b;
	t_node	*headb;

	write(1, "pa\n", 3);
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

	write(1, "pb\n", 3);
	if (lista == NULL)
		print_err_and_exit();
	heada = *lista;
	if (heada == NULL)
		return;
	val_a = rm_node(lista);
	add_node(listb, val_a);
}
