#include "./push_swap.h"

void	sort_3(t_node **stack_a);
static int	get_min(t_node *stack, int val);
void	sort_4(t_node **stack_a, t_node **stack_b);

void	simple_sort(t_node *list_a, t_node *list_b, int len)
{
	if (len == 2)
		swapa(&list_a);
	else if (len == 3)
		sort_3(&list_a);
	else if (len == 4)
		sort_4(&list_a, &list_b);
	else if (len == 5)
		sort_5(&list_a, &list_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(*stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (distance == 4)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a))
		return ;
	push_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(*stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a) == 1)
		return ;
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_3(t_node **stack_a)
{
	t_node	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(*stack_a, -1);
	next_min = get_min(*stack_a, min);
	if (head->val == min && head->prev->val != next_min)
	{
		rotate_a(stack_a);
		swapa(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (head->val == next_min)
	{
		if (head->prev->val == min)
			swapa(stack_a);
		else
			reverse_rotate_a(stack_a);
	}
	else
	{
		if (head->prev->val == min)
			rotate_a(stack_a);
		else
		{
			swapa(stack_a);
			reverse_rotate_a(stack_a);
		}
	}
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

	res = malloc(sizeof(int) * (argc - 1));
	if (res == NULL)
		return NULL;
	for (i = 0; i < argc - 1; i++)
	{
		x = ft_atoi(argv[i+1]);
		res[i] = x;
	}
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
	return res;
}

int	sorted(int argc, char *argv[])
{
	int	i;
	int	pre;
	int	cur;

	for (i = 1; i < argc; i++)
	{
		pre = ft_atoi(argv[i-1]);
		cur = ft_atoi(argv[i]);
		if (pre > cur)
			return (0);
	}
	return (1);
}
