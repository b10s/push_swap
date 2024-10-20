#include "./push_swap.h"

//TODO return err if can't handle?
// or exit immediately with Error msg
void	add_node(t_node **head_ptr, int n)
{
	t_node	*node;
	t_node	*head;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	node = malloc(sizeof(t_node));
	if (node == NULL)
		print_err_and_exit();
	node->val = n;
	if (head == NULL)
	{
		head = node;
		node->next = node;
		node->prev = node;
	}
	else
	{
		head->next->prev = node;
		node->next = head->next;
		head->next = node;
		node->prev = head;
		head = node;
	}
	*head_ptr = node;
}

int	rm_node(t_node **head_ptr)
{
	t_node	*head;
	int			val;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	if (head == NULL)
		print_err_and_exit();
	val = head->val;
	if (head->prev == head)
		*head_ptr = NULL;
	else
	{
		head->prev->next = head->next;
		head->next->prev = head->prev;
		*head_ptr = head->prev;
	}
	free(head);
	return (val);
}

