#include "./push_swap.h"

void free_list(t_node *list)
{
	t_node	*head;
	t_node	*tmp;

	head = list;
	tmp = list;
	tmp = tmp->prev;

	while(tmp != head)
	{
		free(tmp->next);	
		tmp = tmp->prev;
	}
}
