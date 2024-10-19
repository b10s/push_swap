#include "./push_swap.h"

void printList(t_node *root) {
	t_node *node;
	node = root;
	while(node != NULL) {
		//TODO my printf
		printf("%d\n", node->val);
		node = node->prev;
		if (node == root) {
			break;
		}
	}
}

void	err(void)
{
	//TODO use my printf
	// pass message? (read PDF)
	printf("Error\n");
}

//TODO return err if can't handle?
// or exit immediately with Error msg
void addNode(t_node **head_ptr, int n)
{
	t_node *node;
	t_node *head;

	if (head_ptr == NULL)
		err();
	head = *head_ptr;
	node = malloc(sizeof(t_node));
	if (node == NULL)
		err();
	node->val = n;
	if (head == NULL)
	{
		head = node;
		node->next = node;
		node->prev = node;
	} else
	{
		head->next->prev = node;
		node->next = head->next;
		head->next = node;
		node->prev = head;
		head = node;
	}
	*head_ptr = node;
}
