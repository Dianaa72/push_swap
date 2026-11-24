/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 19:37:21 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 20:16:32 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int is_too_much_for_int(char *s)
{
    long    num;
    
    num = ft_atol((const char)*s);
    if (ft_strlen(s) > 11)
        return (1);
    else if (num > INT_MAX || num < INT_MIN)
        return (1);
    return (0);
}

long    ft_atol(const char *nptr)
{
	int		i;
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	i = 0;
	while ((nptr[i] <= 13 && nptr[i] >= 9) || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+' ))
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

int    string_to_node(t_stack *a, char *s)
{
    char    **grid;
    int     value;
    t_node  *node;

    grid = ft_split(s, " ");
    value = 0;
    node = NULL;
    while(*grid)
    {
        if (is_too_much_for_int(*grid))
            return (0);
        if (!a)
            a = stack_inicializer();
        if (a)
        {
            value = ft_atoi((const char)*grid);
            node = node_back(a, new_node(value));
        }
        *grid++;
    }
    return (1)
}