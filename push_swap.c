/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:23:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/22 01:37:56 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	(void)argv;
	if (argc < 2)
		return (write(2, "\tArgumentos insuficientes\n", 26), 0);
	argv++;
    if (has_nulls(argv))
        return (write(2, "\tArgumento nulo\n", 16), 0);
    while (*argv)
	{
    	if (has_spaces(*argv) && ft_isdigit((unsigned char)*(*argv + 1)))
			return (write(2, "\t¿String interno?\n", 19), 1);
		full_dash_check(argv);
		argv++;
	}
	return (0);
}