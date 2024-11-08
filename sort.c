#include "./push_swap.h"

void	sort_3(t_node **stack_a);
static int	get_min(t_node *stack, int val);

void	simple_sort(t_node *list_a, t_node *list_b, int len)
{
	if (len == 2)
		swapa(&list_a);
	else if (len == 3)
		sort_3(&list_a);
	else if (len == 4)
		len++;
	else if (len == 5)
		len++;
}

void	sort_3(t_node **stack_a)
{
	//printf("sort 3!\n");
	t_node	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(*stack_a, -1);
	next_min = get_min(*stack_a, min);
	//printf("min [%d] next_min [%d]\n", min, next_min);
	

	//print_list(*stack_a);
	//printf("[%d] [%d]\n", head->val, head->prev->val);
	if (head->val == min && head->prev->val != next_min)
	{
		//printf("here!\n");
		rotate_a(stack_a);
		//ra(stack_a);
		swapa(stack_a);
		//sa(stack_a);
		reverse_rotate_a(stack_a);
		//rra(stack_a);
	}
	else if (head->val == next_min)
	{
		if (head->prev->val == min)
			swapa(stack_a);
			//sa(stack_a);
		else
			reverse_rotate_a(stack_a);
			//rra(stack_a);
	}
	else
	{
		if (head->prev->val == min)
			rotate_a(stack_a);
			//ra(stack_a);
		else
		{
			swapa(stack_a);
			//sa(stack_a);
			reverse_rotate_a(stack_a);
			//rra(stack_a);
		}
	}
	//print_list(*stack_a);
}

static int	get_min(t_node *stack, int val)
{
	t_node	*head;
	t_node *tmp;
	int		min;

	head = stack;
	tmp = stack;
	min = 6;
	if ((tmp->val < min) && tmp->val != val)
		min = tmp->val;
	tmp = tmp->prev;
	while (head != tmp)
	{
		if ((tmp->val < min) && tmp->val != val)
			min = tmp->val;
		tmp = tmp->prev;
	}
	return (min);
}

int	*buble_sort(int argc, char *argv[])
{
	int	*res;
	int	i;
	int	j;
	int	x;

	//printf("allocating for remap arr [%d] ints\n", argc - 1);
	res = malloc(sizeof(int) * (argc - 1));
	if (res == NULL)
		return NULL;
	for (i = 0; i < argc - 1; i++)
	{
		//TODO replace to mine
		//TODO check for err
		x = atoi(argv[i+1]);
		res[i] = x;
	}
	//print_arr(res, argc-1);
	for (i =0; i < argc - 2; i++)
	{
		for (j = 0; j < argc - 2; j++)
		{
			x = res[j];
			if (x > res[j+1])
			{
				res[j] = res[j+1];
				res[j+1] = x;
			}
		}
	}
	//print_arr(res, argc-1);
	return res;
}

void	print_arr(int *arr, int len)
{
	int	i;
	for(i = 0; i < len; i++)
	{
		//TODO replace with mine
		printf("%d ", arr[i]);
	}
	//TODO replace with mine
	printf("\n");
}

int	sorted(int argc, char *argv[])
{
	int	i;
	int	pre;
	int	cur;

	for (i = 1; i < argc; i++)
	{
		pre = atoi(argv[i-1]);
		cur = atoi(argv[i]);
		//printf("pre [%d] cur [%d]\n", pre, cur);
		if (pre > cur)
			return (0);
	}
	return (1);
}
