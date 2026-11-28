/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:54:47 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 21:46:27 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack *src)
{
	t_node	*second;

	if (!src || !src->head || src->size < 2)
		return (0);
	second = src->head->next;
	if (!second)
		return (0);
	node_front(src, node_drag(src, second));
	return (1);
}

int	push(t_stack *src, t_stack *dst, t_node *node)
{
	t_node	*dragged;

	if (!src || !dst || !node)
		return (0);
	dragged = node_drag(src, node);
	if (!dragged)
		return (0);
	node_front(dst, dragged);
	return (1);
}

int	r_rotate(t_stack *src)
{
	t_node	*prev;

	if (!src || !src->head || src->size < 2)
		return (0);
	prev = src->head->prev;
	if (!prev)
		return (0);
	src->head = prev;
	return (1);
}

int	rotate(t_stack *src)
{
	t_node	*next;

	if (!src || !src->head || src->size < 2)
		return (0);
	next = src->head->next;
	if (!next)
		return (0);
	src->head = next;
	return (1);
}
