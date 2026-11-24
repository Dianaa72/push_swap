/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:00:27 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 20:46:53 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack a, t_stack b)
{
	swap(a);
	swap(b);
}

void	rr(t_stack a, t_stack b)
{
	rotate(a);
	rotate(b);
}

void	rrr(t_stack a, t_stack b)
{
	r_rotate(a);
	r_rotate(b);
}
