#include "./push_swap.h"

t_node	*parse_args(int argc, char *argv[], int *remap);
void		print_list(t_node *root);
void		print_err_and_exit(void);
int			list_len(t_node	*list);
int			find_idx(int val, int *remap, int len);

t_node	*parse_args(int argc, char *argv[], int *remap)
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
		val = find_idx(val, remap, argc - 1);
		add_node(&list, val);
		i--;
	}
	return list;
}

int	find_idx(int val, int *remap, int len)
{
	int	i;

	for (i=0; i<len; i++)
	{
		if (val == remap[i])
			return i;
	}
	return -1;
}

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
