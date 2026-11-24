/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:54:47 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 18:15:21 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push(t_stack *src, t_stack *dst, t_node *data)
{
    t_node  *dragged;

    if (!src || !dst || !data)
        return ;       
    dragged = node_drag(data);
    if (!dragged)
        return ;
    node_front(src, dragged);
}

void    swap(t_stack *src, t_stack *dst, t_node *data)
{
    
}