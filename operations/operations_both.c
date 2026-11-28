/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:00:27 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 21:25:31 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *a, t_stack *b)
{
	if (swap(a) && swap(b))
		write(1, "ss\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	if (rotate(a) && rotate(b))
		write(1, "rr\n", 3);
}

void	rrr(t_stack *a, t_stack *b)
{
	if(r_rotate(a) && r_rotate(b))
		write(1, "rrr\n", 4);
}
