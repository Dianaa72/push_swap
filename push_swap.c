/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:23:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/21 20:36:45 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    (void )argv;
    if (argc < 2)
        return (write(2, "Argumentos insuficientes\n", 26), 0);
    argv++;
    while (*argv)
    {
        while (**argv)
        {
            if (ft_isdash(**argv) && ft_isdash((unsigned char)*(*argv + 1)))
                return (write(2, "\tTenemos una flag\n", 19), 0);
            else if (ft_isdash(**argv) && !ft_isdash((unsigned char)*(*argv + 1)) && (**argv + 1))
            {
                if (has_morethan_digits(*argv + 1))
                    return (write(2, "\tArgumento no válido\n", 23), 0);
                return (write(2, "\tNúmero negativo\n", 19), 0);                               
            }
            else if (!**argv || has_morethan_digits(*argv))
                return (write(2, "\tArgumento no válido\n", 23), 0);
            else
                return(write(2, "\tEn próximos episodios...", 26), 0);
            }
            (*argv)++;
        }
        argv++;
    return (0);
}