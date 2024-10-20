#include "./push_swap.h"

//TODO parse args
void main(int argc, char *argv[]) {
	t_node	*lista;
	t_node	*listb;

	lista = NULL;
	listb = NULL;
	// TODO do I need to err here or empty list is ok?
	// check PDF
	if (argc < 2)
		print_err_and_exit();

	lista = parse_args(argc, argv);
	print_list(lista);
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

make re && ./push_swap 1 42 5 10


*/
