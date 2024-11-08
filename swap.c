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
	write(1, "sa\n", 3);
	swap(lista_ptr);
}

void	swapb(t_node **listb_ptr)
{
	write(1, "sb\n", 3);
	swap(listb_ptr);
}

void	swapab(t_node **lista_ptr, t_node **listb_ptr)
{
	write(1, "ss\n", 3);
	swap(lista_ptr);
	swap(listb_ptr);
}
