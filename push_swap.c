#include "./push_swap.h"

//TODO parse args
void main(int argc, char *argv[]) {
	t_node	*list_a;
	t_node	*list_b;
	int			arr_len;
	int			i;

	list_a = NULL;
	list_b = NULL;
	arr_len = argc - 1;
	i = 0;

	// TODO do I need to err here or empty list is ok?
	// check PDF
	if (argc < 2)
		print_err_and_exit();

	list_a = parse_args(argc, argv);
	print_list(list_a);

	// --- algo ---
	//TODO test cases with 0, 1, 2, 3 elements?
	//TODO test cases with even and odd arr_len
	while (i < arr_len / 2)
	{
		push_b(&list_a, &list_b);
		i++;
	}
	print_list(list_a);
	print_list(list_b);
	printf("list len [%d]\n", list_len(list_b));

	//bubble();
	//merge();


	// ---      ---
	//test();

	/*
		receive numbers via arg
		add them into list_a and create empty list_b
		- start algo -
		pb half of elements from a to b
		implement bubble sort using sa, sb or ss
		merge back b into a
	*/
}

//TODO try on 10 elements
//TODO think about even/uneven lists

//TODO Makefile with mine printf and libft

//TODO verify via checker
//TODO use python script from discord to verify with others
//TODO implement own checker as part of bonus

/*

make re && ./push_swap 1 42 5 10 3 0 -1 100

ga *.c *.h Makefile

*/
