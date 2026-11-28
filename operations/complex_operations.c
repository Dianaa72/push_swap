#include "../push_swap.h"


void    rotate_to_top(t_stack *src, t_node *climber)
{
    unsigned int	i;

    i = 0;
    if (climber->pos <= (src->size / 2))
    {
        while (i < climber->pos)
        {
            rotate(src);
            ft_printf("r%c\n", src->name);
            i++;
        }
        }
    else
    {
        while (i < src->size - climber->pos)
        {
            r_rotate(src);
            ft_printf("rr%c\n", src->name);
            i++;
        }
    }
}
