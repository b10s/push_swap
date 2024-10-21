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

	// TODO do I need to err here or empty list is ok?
	// check PDF
	if (argc < 2)
		print_err_and_exit();

	list_a = parse_args(argc, argv);
	print_list(list_a);

	// --- algo ---
	//TODO test cases with 0, 1, 2, 3 elements?
	//TODO test cases with even and odd arr_len
	i = 0;
	while (i++ < arr_len / 2)
		push_b(&list_a, &list_b);

	print_list(list_a);
	print_list(list_b);

	sort_lists(&list_a, &list_b);
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

//TODO test if list len is not equal
void	sort_lists(t_node **list_a, t_node **list_b)
{
	int	list_a_len;
	int	list_b_len;
	int	loops;
	int	elements;
	int	direction;
	t_node	*orig_head_list_a;
	t_node	*orig_head_list_b;

	orig_head_list_a = *list_a;
	orig_head_list_b = *list_b;

	direction = FT_FORWARD;
	list_a_len = list_len(*list_a);
	list_b_len = list_len(*list_b);
	printf("list_a len [%d], list_b len[%d]\n", list_a_len, list_b_len);
	loops = list_a_len - 2;
	while(loops >= 0)
	{
		//loop over lists
		//cehck if we need to swap a, b or both
		//rotate forward or back depends on flag
		elements = loops;
		while(elements >= 0)
		{
			printf("loops [%d], elements [%d]\n", loops, elements);
			// if elements == 0 we can only swap but not rotate!

			// need swap a? need swap b? need swap both?
			// do swap
			print_list(orig_head_list_a);
			print_list(orig_head_list_b);
			if (direction == FT_REVERSE)
				reverse_rotate_ab(list_a, list_b);
			if (need_swap(*list_a, direction) == 1)
			{
				printf("need to swap A!\n");
				swapa(list_a);
			}
			if (need_swap(*list_b, direction) == 1)
			{
				printf("need to swap B!\n");
				swapb(list_b);
			}
			if (direction == FT_FORWARD && elements != 0)
				rotate_ab(list_a, list_b);
			print_list(orig_head_list_a);
			print_list(orig_head_list_b);

			// do rotate or reverse rotate
			elements--;
		}

		if (direction == FT_FORWARD)
			direction = FT_REVERSE;
		else
			direction = FT_FORWARD;
		loops--;
	}
	//TODO rewind to original head
	//last one?
}

int	need_swap(t_node *head, int direction)
{
	int	value;
	if(head == NULL)
		return 0;
	if (head == head->next)
		return 0;

	value = head->prev->val;
	printf("FWD: head val [%d], next val [%d]\n", head->val, value);
	if (value > head->val)
		return 1;
	return 0;
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
