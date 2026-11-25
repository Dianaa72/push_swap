/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 19:37:21 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 13:03:12 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	num_to_node(t_stack *a, char *s)
{
	t_node	*node;

	if (!a || is_too_much_for_int(s))
		return (0);
	node = node_back(a, new_node(ft_atoi(s)));
	if (!node)
		return (0);
	ft_printf("\t\tCreado nodo con valor %d\n", node->value);
	return (1);
}

int	is_too_much_for_int(char *s)
{
	long	num;

	if (ft_strlen(s) > 11)
		return (write(2, "\tError: demasiado para int\n", 28), 1);
	num = ft_atol(s);
	if (num > INT_MAX || num < INT_MIN)
		return (write(2, "\tBien: tenemos un int precioso\n", 32), 1);
	return (0);
}

long	ft_atol(char *nptr)
{
	int		i;
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	i = 0;
	while ((nptr[i] <= 13 && nptr[i] >= 9) || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+'))
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

void	free_grid(char **grid)
{
	size_t	i;
	
	if (!grid)
		return ;
	i = 0;
	while (*(grid + i))
	{
		free(*(grid+ i));
		i++;
	}
	free(grid);
}

int	string_to_node(t_stack *a, char *s)
{
	char	**grid;
	char	**twin;
	int		value;

	if (!a|| !s)
		return (0);
	grid = ft_split(s, ' ');
	if (!grid)
		return (0);
	twin = grid;
	value = 0;
	while (*twin)
	{
		if (is_too_much_for_int(*twin))
			return (free_grid(grid), 0);
		value = ft_atoi(*twin);
		ft_printf("\t\tCreado nodo con valor %d\n", value);
		node_back(a, new_node(value));
		twin++;
	}
	free_grid(grid);
	write(2, "\tNodo a partir de string creado\n", 33);
	return (1);
}

