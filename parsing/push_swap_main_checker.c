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
	int flag_count;
		
	flag_count = 0;
	while (*argv)
	{
		if (ft_istarget('-', **argv) && ft_istarget('-', *(*argv + 1)))
		{
			flag_count++;
			if (flag_count > 2)
				return (0);
			if (!is_flag_valid(*argv))
				return (0);
		}
		else if (ft_istarget('-', **argv) && !ft_istarget('-', *(*argv + 1))
			&& *(*argv + 1))
		{
			if (has_morethan_digits(*argv + 1))
				return (0);
			return (1);
		}
		else if (!**argv || has_morethan_digits(*argv))
			return (0);
		else
			return (1);
		argv++;
	}
	return (0);
}
