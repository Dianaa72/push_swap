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
	if(swap(b))
		write(1, "sb\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if(push(a, b, a->head))
		write(1, "pb\n", 3);
}

void	rb(t_stack *b)
{
	if(rotate(b))
		write(1, "rb\n", 3);
}

void	rrb(t_stack *b)
{
	if(r_rotate(b))
		write(1, "rrb\n", 4);
}
