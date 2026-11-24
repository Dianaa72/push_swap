/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:54:47 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 19:28:32 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *src, t_stack *dst, t_node *data)
{
	t_node	*dragged;

	if (!src || !dst || !data)
		return ;
	dragged = node_drag(data);
	if (!dragged)
		return ;
	node_front(dst, dragged);
}

void	swap(t_stack *src)
{
	t_node	*second;

	if (!src)
		return ;
	second = src->head->prev;
	if (!second)
		return ;
	node_front(src, node_drag(second));
}

void	rotate(t_stack *src)
{
	t_node	*prev;

	if (!src)
		return ;
	prev = src->head->prev;
	if (!prev)
		return ;
	src->head = prev;
}

void	r_rotate(t_stack *src)
{
	t_node *next;

	if (!src)
		return ;
	next = src->head->next;
	if (!next)
		return ;
	src->head = next;
}