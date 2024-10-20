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
	//TODO use my printf
	printf("ra\n");
	rotate(lista);
}

void	rotate_b(t_node **listb)
{
	//TODO use my printf
	printf("rb\n");
	rotate(listb);
}

