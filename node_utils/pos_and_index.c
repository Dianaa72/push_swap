#include "../push_swap.h"

void  assign_index_to_nodes(t_stack *stack)
{
    t_node  *a;
    t_node *b;
    unsigned int i;
    unsigned int j;
    unsigned int n_index;

    if (!stack || !stack->head)
        return ;
    a = stack->head;
    b = stack->head;
    i = 0;
    while(i < stack->size)
    {
        j = 0;
        n_index = 0;
        b = stack->head;
        while (j < stack->size)
        {
            if (b->value < a->value)
                n_index++;         
            b = b->next;
            j++;
        }
        a->index = n_index;
        i++;
        a = a->next;
    }
}

void assign_positions_to_nodes(t_stack *stack)
{
    t_node *checker;
    unsigned int i;

    if (!stack || !stack->head)
        return ;
    i = 0;
    checker = stack->head;
    while (i < stack->size)
    {
        checker->pos = i;
        i++;
        checker = checker->next;
    }    
}

t_node    *max_node(t_stack *src)
{
    t_node *finder;
    t_node *max;
    unsigned int    i;

    if (!src || !src->head)
        return (NULL);
    i = 1;
    max = src->head;
    finder = src->head->next;
    while (i < src->size)
    {
        if (finder->index > max->index)
            max = finder;
        finder = finder->next;
        i++;
    }
    return (max);
}

t_node  *min_node(t_stack *src)
{
    t_node *finder;
    t_node *min;
    unsigned int    i;

    if (!src || !src->head)
        return (NULL);
    i = 1;
    min = src->head;
    finder = src->head->next;
    while (i < src->size)
    {
        if (finder->index < min->index)
            min = finder;
        finder = finder->next;
        i++;
    }
    return (min);
}
