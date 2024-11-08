#include "./push_swap.h"

void	rotate(t_node **head_ptr)
{
	t_node	*head;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	if (head == NULL)
		return;
	if (head->prev == head)
		return;
	head = head->prev;
	*head_ptr = head;
}

void	rotate_a(t_node **lista)
{
	write(1, "ra\n", 3);
	rotate(lista);
}

void	rotate_b(t_node **listb)
{
	write(1, "rb\n", 3);
	rotate(listb);
}

void	rotate_ab(t_node **lista, t_node **listb)
{
	write(1, "rr\n", 3);
	rotate(lista);
	rotate(listb);
}

