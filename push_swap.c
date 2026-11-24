/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:23:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 19:36:37 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (write(2, "\tArgumentos insuficientes\n", 26), 0);
	argv++;
	if (has_nulls(argv))
		return (write(2, "\tArgumento nulo\n", 16), 0);
	while (*argv)
	{
		if (has_spaces(*argv))
		{
			if(!has_morethan_digits(*argv))
				string_to_node(*argv);			
		}
		full_dash_check(argv);
		argv++;
	}
	return (0);
}