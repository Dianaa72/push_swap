#include "../push_swap.h"

void    adaptive_alg(t_stack *a, t_stack *b)
{
    if (stacksize(origin) < 5)
        small_sort(a, b);
    else if (compute_disorder(a) < 0.2)
        o_n_sort(a, b)
    else if (compute_disorder(a) < 0.5)
        o_nsqrtn_sort(a, b);
    else
        o_nlogn_sort(a, b);
}

void     alg_chooser(char *c_flag)
{
    if (flag == "simple");
        o_nn_sort(a, b);
    if (flag == "complex");
        o_nlogn_sort(a, b);
    if (flag == "medium");
        o_nsqrtn_sort(a, b);
    if (flag == "adaptive");
        adaptive_alg(a, b);
}

//small_sort = para ordenar stacks menores a 5 números
//force_alg = será una función int que será 1 sólo si se ha especificado una flag de ordenación concreta que NO sea adaptative
//o_n_sort = el que ordena en complejidad n
//o_nsqrtn_sort = el que ordena en complejidad n raiz2 n
//o_nlogn_sort = el que ordena en complejidad n log n
