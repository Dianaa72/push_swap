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
        return (0);
    a = stack->head;
    i = 0;
    while(i < stack->size)
    {
        j = i + 1;
        b = a->next;
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
		//ft_printf("\t\tLiberando nodo con valor %d...\n", killer->value);
		accomplice = killer->next;
		free(killer);
		killer = accomplice;
		i++;
	}
	ft_printf("\t\tLiberando stack con tamaño %d...\n", victim->size);
	free(victim);
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
