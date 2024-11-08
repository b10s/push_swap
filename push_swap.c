#include "./push_swap.h"

//TODO replace with my functions
//TODO makefile
//TODO norm
int main(int argc, char *argv[]) {

	t_node	*list_a;
	t_node	*list_b;
	int			arr_len;
	int			i;
	int			*remap;
	int			bits;
	int	stack_b_len;
	int	j;


	stack_b_len = 0;
	list_a = NULL;
	list_b = NULL;
	arr_len = argc - 1;

	if (argc < 2)
		return (0);
	if (args_are_valid(argc, argv) != 1)
		print_err_and_exit();
	remap = buble_sort(argc, argv);
	if (remap == NULL)
		print_err_and_exit();
	for (i = 1; i < argc; i++)
		if (remap[i-1] == remap[i])
			print_err_and_exit();
	if (sorted(argc, argv) == 1)
		return 0;
	list_a = parse_args(argc, argv, remap);
	if (argc - 1 <= 5)
	{
		simple_sort(list_a, list_b, argc - 1);
		return (0);
	}
	bits = calc_bits(argc - 1);
	for (i = 0; i < bits; i++)
	{
		stack_b_len = 0;
		for (j = 0; j < argc - 1; j++)
		{
			if ( ((list_a->val >> i) & 1) == 0)
			{
				push_b(&list_a, &list_b);
				stack_b_len++;
			} else
				rotate_a(&list_a);
		}
		for (j = 0; j < stack_b_len; j++)
			push_a(&list_a, &list_b);
	}

	free_list(list_a);
	free(remap);
}

int	calc_bits(int len)
{
	int	res;
	int	bits;
	res = 2;
	bits = 2;
	for(;;)
	{
		if (res == len)
			return bits;
		if (res > len)
			return bits - 1;
		res = res * 2;
		bits++;
	}
	return bits;
}
