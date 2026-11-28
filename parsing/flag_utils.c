#include "../push_swap.h"

// int     there_are_complexity_flags(char **arg)
// {
//     int c_flag_count;

//     c_flag_count = 0;
//     while (argv)
//     {
//         if (word_check(arg, "bench"))
//             activar benchmark
//         if (flag_count < 1 && ())
//             return (1)
//     }
//     return (0)
// }

int is_flag_valid(char *argv)
{
    //ft_printf("\t\tEntramos en is_flag_valid\n");
    if (word_check(argv, "--bench"))
        return (1);
    else if (word_check(argv, "--simple"))
        return (1);
    else if (word_check(argv, "--medium"))
        return (1);
    else if (word_check(argv, "--complex"))
        return (1);
    else if (word_check(argv, "--adaptive"))
        return (1);
    //ft_printf("\t\tFlag = %s\n", argv);
    return (0);
}

// char    *complexity_flag(char *arg)
// {
//     char *c_flag;

//     if (there_are_complexity_flags(argv))
//     {
//         extraer flag y guardarla en variable c_flag
//         return (c_flag);
//     }
//     else 
//         return (NULL);
// }

// void   is_flag_for_alg(char *c_flag)
// {
//     if (flag != "bench")
//         force_alg(a, b, c_flag);
//     else
//         benchmark (????)
// }