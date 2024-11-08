/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:34:58 by aenshin           #+#    #+#             */
/*   Updated: 2024/11/09 01:38:26 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node {
	int			val;
	struct node	*next;
	struct node	*prev;
}	t_node;

# define FT_FORWARD 1
# define FT_REVERSE 0

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
t_node	*parse_args(int argc, char *argv[], int *remap);
int		list_len(t_node	*list);
void	sort_lists(t_node **list_a, t_node **list_b);
int		need_swap(t_node *head, int direction);
int		*buble_sort(int argc, char *argv[]);
void	print_arr(int *arr, int len);
int		calc_bits(int len);
int		sorted(int argc, char *argv[]);
int		args_are_valid(int argc, char *argv[]);
long	ft_atoi(const char *str);
void	simple_sort(t_node *list_a, t_node *list_b, int len);
int		get_distance(t_node **stack, int index);
int		is_sorted(t_node **stack);
void	sort_5(t_node **stack_a, t_node **stack_b);
void	free_list(t_node *list);

#endif
