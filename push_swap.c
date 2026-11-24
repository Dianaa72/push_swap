/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:23:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 23:47:30 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	// t_stack	*b;

	if (argc < 2)
		return (write(2, "\tArgumentos insuficientes\n", 26), 0);
	argv++;
	if (has_nulls(argv))
		return (write(2, "\tArgumento nulo\n", 16), 0);
	a = new_stack('a');
	// b = new_stack('b');
	while (*argv)
	{
		if (has_spaces(*argv))
		{
			if (!has_morethan_digits(*argv))
				string_to_node(a, *argv);
		}
		else if (full_dash_check(argv))
			num_to_node(a, *argv);
		else
			return (0);
		argv++;
	}
	return (0);
}
