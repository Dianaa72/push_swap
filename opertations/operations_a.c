/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 19:52:34 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 20:12:37 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	swap(a);
}

void	pa(t_stack *a, t_stack *b)
{
	push(b, a, b->head);
}

void	ra(t_stack *a)
{
	rotate(a);
}

void	rra(t_stack *a)
{
	r_rotate(a);
}
