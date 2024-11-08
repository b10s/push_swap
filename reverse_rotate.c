#include "./push_swap.h"

void	reverse_rotate(t_node **head_ptr)
{
	t_node	*head;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	if (head == NULL)
		return;
	if (head->next == head)
		return;
	head = head->next;
	*head_ptr = head;
}

void	reverse_rotate_a(t_node **lista)
{
	write(1, "rra\n", 4);
	reverse_rotate(lista);
}

void	reverse_rotate_b(t_node **listb)
{
	write(1, "rrb\n", 4);
	reverse_rotate(listb);
}

void	reverse_rotate_ab(t_node **lista, t_node **listb)
{
	write(1, "rrr\n", 4);
	reverse_rotate(lista);
	reverse_rotate(listb);
}

