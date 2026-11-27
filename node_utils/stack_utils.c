/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:41:14 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 13:06:13 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	stacksize(t_stack *stack)
{
	unsigned int	i;
    t_node  *checker;

    if (!stack || !stack->head)
		return (0);
	i = 1;
	checker = stack->head->next;
	while (checker != stack->head)
	{
		i++;
		checker = checker->next;
	}
	return (i);
}

void print_stack(t_stack *src)
{
    unsigned int  size;
    unsigned int  i;
    t_node  *checker;

    if (!src || !src->head)
        return ((void)ft_printf("\tStack vacío\n"));
    checker = src->head;
    size = stacksize(src);
    i = 0;
	ft_printf("\n\n====VALORES DE ESTE STACK %c====\n", src->name);
    while (i < size)
    {
		ft_printf("    - Nodo %u con valor %d\n", i + 1, checker->value);
        checker = checker->next;
        i++;
    }
}

t_stack	*new_stack(char name)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	stack->name = name;
	return (stack);
}
