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

int	there_are_duplicates(t_stack *stack)
{
    t_node  *a;
    t_node *b;
    unsigned int i;
    unsigned int j;
    
    if (!stack || !stack->head)
        return (1);
    a = stack->head;
    b = stack->head;
    i = 0;
    while(i < stack->size)
    {
        j = 0;
        b = stack->head;
        while (j < stack->size)
        {
            if (b->value == a->value)
                return (1);         
            b = b->next;
            j++;
        }
        i++;
        a = a->next;
    }
	return (0);
}

unsigned int	stack_size_assigner(t_stack *stack)
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
	stack->size = i;
	return (i);
}

void print_stack(t_stack *src)
{
    size_t  size;
    size_t  i;
    t_node  *checker;

    if (!src || !src->head)
        return ((void)ft_printf("\tStack vacío\n"));
    checker = src->head;
    size = src->size;
    i = 0;
	ft_printf("\n\n====VALORES DE ESTE STACK %c====\n", src->name);
    while (i < size)
    {
		ft_printf("    - Nodo %u con valor %d e índice %u\n", checker->pos, checker->value, checker->index);
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

void	free_stack(t_stack *victim)
{
	unsigned int i;
	t_node *killer;
	t_node *accomplice;

	if (!victim)
		return ;
	i = 0;
	killer = victim->head;
	while (i < victim->size)
	{
		accomplice = killer->next;
		free(killer);
		killer = accomplice;
		i++;
	}
	free(victim);
}
