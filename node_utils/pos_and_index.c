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