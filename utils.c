#include "./push_swap.h"

void	print_list(t_node *root)
{
	t_node	*node;

	node = root;
	while (node != NULL)
	{
		//TODO my printf
		printf("%d -> ", node->val);
		node = node->prev;
		if (node == root)
			break ;
	}
	printf("\n");
}

void	print_err_and_exit(void)
{
	//TODO use my printf
	// pass message? (read PDF)
	printf("Error\n");
	exit(1);
}

t_node	*parse_args(int argc, char *argv[])
{
	t_node	*list;
	int			val;
	int			i;

	list = NULL;
	i = argc - 1;
	while (i > 0)
	{
		//TODO use mine atoi
		//TODO detect err; if returned 0 it might be a valid result or err
		val = atoi(argv[i]);
		add_node(&list, val);
		i--;
	}
	return list;
}

int	list_len(t_node	*list)
{
	t_node	*head;
	t_node	*cur;
	int			res;

	if (list == NULL)
		return (0);
	res = 1;
	head = list;
	cur = list;
	while( head != cur->prev)
	{
		res++;
		cur = cur->prev;
	}

	return (res);
}
