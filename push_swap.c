#include "./push_swap.h"

//TODO parse args
int main(int argc, char *argv[]) {
	t_node	*list_a;
	t_node	*list_b;
	int			arr_len;
	int			i;
	int			*remap;
	int			bits;

	list_a = NULL;
	list_b = NULL;
	arr_len = argc - 1;

	// TODO do I need to err here or empty list is ok?
	//TODO handle all errors
	// check PDF
	if (argc < 2)
		print_err_and_exit();

	remap = buble_sort(argc, argv);
	if (remap == NULL)
		print_err_and_exit();

	list_a = parse_args(argc, argv, remap);
	//TODO sort args
	//TODO re-assign numbers in list_a
	//print_list(list_a);

	//TODO need to free remap or not? probably not needed
	//TODO must free!

	int	stack_b_len = 0;
	int	j;

	bits = calc_bits(argc - 1);
	//printf("bits: [%d]\n", bits);
	for (i = 0; i < bits; i++)
	{
		//printf("checking bit [%d]\n", i);
		stack_b_len = 0;
		for (j = 0; j < argc - 1; j++)
		{
			if ( ((list_a->val >> i) & 1) == 0)
			{
				push_b(&list_a, &list_b);
				stack_b_len++;
			} else
			{
				rotate_a(&list_a);
			}
		}

		for (j = 0; j < stack_b_len; j++)
			push_a(&list_a, &list_b);
		//print_list(list_a);
		//print_list(list_b);
	}

	//printf("FINAL\n");
	//print_list(list_a);
	//print_list(list_b);
}

int	calc_bits(int len)
{
	int	res;
	res = 2;
	for(;;)
	{
		if (res == len)
			return res;
		if (res > len)
			return res/2;
		res = res * 2;
	}
}



//TODO Makefile with mine printf and libft

//TODO verify via checker
//TODO use python script from discord to verify with others

/*

make re && ./push_swap 1 3 2 5 -1 -2 0 7 11 12

ga *.c *.h Makefile

*/
