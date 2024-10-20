#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
	struct node *prev;
} t_node;

void	print_list(t_node *root);
void	print_err_and_exit(void);
void	add_node(t_node **head_ptr, int n);
int		rm_node(t_node **head_ptr);
void	swap(t_node **head_ptr);
void	swapa(t_node **lista_ptr);
void	swapb(t_node **lista_ptr);
void	swapab(t_node **lista_ptr, t_node **listb_ptr);
void	push_a(t_node **lista, t_node **listb);
void	push_b(t_node **lista, t_node **listb);
void	rotate_a(t_node **lista);
void	rotate_b(t_node **listb);
void	rotate_ab(t_node **listba, t_node **listb);
void	reverse_rotate_a(t_node **lista);
void	reverse_rotate_b(t_node **listb);
void	reverse_rotate_ab(t_node **lista, t_node **listb);
// TODO remove test?
void	test();
t_node	*parse_args(int argc, char *argv[]);

/*
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.

ss : sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.

rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

rrr : rra and rrb at the same time.
*/
