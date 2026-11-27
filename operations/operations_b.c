/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:00:31 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 20:14:15 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *b)
{
	swap(b);
}

void	pb(t_stack *b, t_stack *a)
{
	push(a, b, a->head);
}

void	rb(t_stack *b)
{
	rotate(b);
}

void	rrb(t_stack *b)
{
	r_rotate(b);
}
