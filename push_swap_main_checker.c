/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 19:01:36 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/21 20:31:41 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdash(int c)
{
	if (c == '-')
		return (1);
	else
		return (0);
}

int	has_morethan_digits(char *s)
{
	while (*s)
	{
		if (!ft_isdigit((unsigned char)*s))
			return (1);
		s++;
	}
	return (0);
}
