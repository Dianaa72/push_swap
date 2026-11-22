/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 01:52:55 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/22 02:33:27 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

// t_node	node_front(t_stack *stack, t_node *new)
// {
//     t_node  *ref_last;
//     t_node  *ref_next;
    
//     ref_last = stack->head->prev;
//     ref_next = stack->head->next;
//     if (!stack || !new)
//         return ;
//     if (!stack->head)
//         stack->head = new;
//     else
//     {
//         new->next = stack->head;
//         new->prev = ref_last;
//         ref_last->next = new;
//         ref_next = new;
//         stack->head = new;
//     }
//     stack->size++;
// }

// t_node	node_back(t_stack *stack, t_node *new)
// {
//     t_node  *ref_last;
//     t_node  *ref_next;
    
//     ref_last = stack->head->prev;
//     ref_next = stack->head->next;
//     if (!stack || !new)
//         return ;
//     if (!ref_last)
//         ref_last = new;
//     else
//     {
//         new->prev = stack->head;
//         new->next = ref_last;
//         ref_next = new;
//         ref_last = new;
//     }
//     stack->size++;
// }