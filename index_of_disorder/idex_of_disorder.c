/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idex_of_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:56:12 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 22:52:09 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	compute_disorder(t_stack a)
{
	int		mistakes;
	int		total_pairs;
	int		i;
	int		j;
	t_node	*prev;
	t_node	*next;

	mistakes = 0;
	total_pairs = 0;
	i = 0;
	j = 0;
	prev = a.head;

	while (i < a.size - 1)
	{
		j = i + 1;
		while (j < a.size)
		{
			next->next->next
			total_pairs++;
			if (prev->value > next->value)
				mistakes++;
			next->next->next;
			j++;
		}
		prev = prev->next;
		i++;
	}
	if (total_pairs == 0)
		return (0.0);
	return (mistakes / total_pairs);
}
