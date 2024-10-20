#include "./push_swap.h"

//TODO static for such func (rotate, swap)
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
	//TODO use my printf
	printf("rra\n");
	reverse_rotate(lista);
}

void	reverse_rotate_b(t_node **listb)
{
	//TODO use my printf
	printf("rrb\n");
	reverse_rotate(listb);
}

void	reverse_rotate_ab(t_node **lista, t_node **listb)
{
	//TODO use my printf
	printf("rrr\n");
	reverse_rotate(lista);
	reverse_rotate(listb);
}

