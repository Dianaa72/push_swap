#include "../push_swap.h"

void sort_two(t_stack *a)
{
    if (a->head->index > a->head->next->index)
        sa(a);
}

void sort_three(t_stack *a)
{
    t_node *max;

    max = max_node(a);
    if (max == a->head)
        ra(a);
    else if (max == a->head->next)
        rra(a);
    if (a->head->index > a->head->next->index)
        sa(a);
}

void sort_five(t_stack *a, t_stack *b)
{
    if (!a || !b || !a->head)
        return ;
    while (a->size > 3)
    {
        assign_positions_to_nodes(a);
        rotate_to_top(a, min_node(a));
        pb(a, b);
    }
    sort_three(a);
    while (b->size > 0)
        pa(b, a);
}