/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 19:01:36 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 12:03:32 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_istarget(int target, int c)
{
	if (c == target)
		return (1);
	else
		return (0);
}

int	has_morethan_digits(char *s)
{
	while (*s)
	{
		if (ft_isdigit(*s))
			s++;
		else if (has_spaces(s))
			s++;
		else
			return (write (2, "\tAlgo aquí no es num o espacio\n", 33), 1);
	}
	return (0);
}

int	has_spaces(char *s)
{
	while (*s)
	{
		if (ft_istarget(' ', (unsigned char)*s))
			return (1);
		s++;
	}
	return (0);
}

int	has_nulls(char **s)
{
	while (*s)
	{
		if (!**s)
			return (1);
		s++;
	}
	return (0);
}

int	full_dash_check(char **argv)
{
	if (ft_istarget('-', **argv) && ft_istarget('-', **argv + 1))
		return (write(2, "\tTenemos una flag\n", 19), 1);
	else if (ft_istarget('-', **argv) && !ft_istarget('-', *(*argv + 1))
		&& *(*argv + 1))
	{
		if (has_morethan_digits(*argv + 1))
			return (write(2, "\tArgumento no válido\n", 23), 0);
		return (write(2, "\tNúmero negativo\n", 19), 1);
	}
	else if (!**argv || has_morethan_digits(*argv))
		return (write(2, "\tArgumento no válido\n", 23), 0);
	else
		return (write(2, "\tEn próximos episodios...\n", 27), 1);
}
