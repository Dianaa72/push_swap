/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of_disorder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:56:12 by dde-luca          #+#    #+#             */
/*   Updated: 2026/11/24 23:52:56 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	compute_disorder(t_stack *a)
{
	int		mistakes;
	int		total_pairs;
	t_node	*to_check;
	t_node	*checker;

	if(!a->head || !a->head->next)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	to_check = a->head;
	while (to_check->next)
	{
		checker = to_check->next;
		while (checker)
		{
			total_pairs++;
			if (to_check->value > checker->value)
				mistakes++;
			checker = checker->next;
		}
		to_check = to_check->next;
	}
	if (total_pairs == 0)
		return (0.0);
	return ((double) mistakes / total_pairs);
}
