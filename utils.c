/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:23:40 by aenshin           #+#    #+#             */
/*   Updated: 2024/10/19 23:38:06 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

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

//TODO return err if can't handle?
// or exit immediately with Error msg
void	add_node(t_node **head_ptr, int n)
{
	t_node	*node;
	t_node	*head;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	node = malloc(sizeof(t_node));
	if (node == NULL)
		print_err_and_exit();
	node->val = n;
	if (head == NULL)
	{
		head = node;
		node->next = node;
		node->prev = node;
	}
	else
	{
		head->next->prev = node;
		node->next = head->next;
		head->next = node;
		node->prev = head;
		head = node;
	}
	*head_ptr = node;
}

int	rm_node(t_node **head_ptr)
{
	t_node	*head;
	int			val;

	if (head_ptr == NULL)
		print_err_and_exit();
	head = *head_ptr;
	if (head == NULL)
		print_err_and_exit();
	val = head->val;
	if (head->prev == head)
		*head_ptr = NULL;
	else
	{
		head->prev->next = head->next;
		head->next->prev = head->prev;
		*head_ptr = head->prev;
	}
	free(head);
	return (val);
}
