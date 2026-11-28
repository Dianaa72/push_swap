#include "../push_swap.h"

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