/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 19:52:34 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 20:58:55 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	if (swap(a))
		write(1, "sa\n", 3);

}

void	pa(t_stack *b, t_stack *a)
{
	if (push(b, a, b->head))
		write(1, "pa\n", 3);
	ft_printf("\ta = %d, y b = %d\n", a->size, b->size);
}

void	ra(t_stack *a)
{
	if(rotate(a))
		write(1, "ra\n", 3);
}

void	rra(t_stack *a)
{
	if(r_rotate(a))
		write(1, "rra\n", 4);
}
