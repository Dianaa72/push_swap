#include "../push_swap.h"

int     there_are_complexity_flags(char *argv)
{
    if hay flag de benchmark
        activar benchmark
    if hay solo una flag de complejidad y es válida
        return (1)
    return (0)
}

char    *complexity_flag(char *argv)
{
    char *c_flag;

    if (there_are_complexity_flags(argv))
    {
        extraer flag y guardarla en variable c_flag
        return (c_flag);
    }
    else 
        return (NULL);
}

void   is_flag_for_alg(char *c_flag)
{
    if (flag != "bench")
        force_alg(a, b, c_flag);
    else
        benchmark (????)
}

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
