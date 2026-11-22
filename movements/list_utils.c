/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 01:52:55 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/22 16:02:52 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
    node->prev = node;
    node->next = node;
	node->value = value;
    node->index = 0;
	return (node);
}

t_node	*node_front(t_stack *stack, t_node *new)
{
	t_node *stack_front;
	t_node *stack_back;

	if (!stack || !new)
		return (NULL);
	if (!stack->head)
	{	
		new->next = new;
		new->prev = new;
		stack->head = new;
	}
	else
	{
		stack_front = stack->head;		// Defino la cabeza
		stack_back = stack->head->prev;	// Defino el último
		new->next = stack->head;		// POV new: nueva cabeza 	-> cabeza
		new->prev = stack_back;			// POV new: último 			-> nueva cabeza
		stack_front->prev = new;		// POV head: nueva cabeza 	<- cabeza
		stack_back->next = new;			// POV head: último 		-> nueva cabeza
		stack->head = new;				// Defino la cabeza como nueva cabeza
	}
	stack->size++;
	return (new);
}

t_node	*node_back(t_stack *stack, t_node *new)
{
	t_node *stack_tail;
	t_node *stack_head;

	if (!stack || !new)
		return (NULL);
	if (!stack->head)
	{	
		new->next = new;
		new->prev = new;
		stack->head= new;
	}
	else
	{
		stack_tail = stack->head->prev;	// Defino la cola
		stack_head = stack->head;		// Defino el primero
		new->next = stack_head;			// POV new: nueva cola 	-> cabeza
		new->prev = stack_tail;			// POV new: cola 		<- nueva cola
		stack_tail->next = new;			// POV cola: cola 		-> nueva cola
		stack_head->prev = new;			// POV cola: cabeza		<- cola
	}
	stack->size++;
	return (new);
}
