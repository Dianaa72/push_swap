/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:29:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/24 18:48:39 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

/* SYSTEM LIBRARIES */
# include <stddef.h>

/* OWN LIBRARIES */
# include "libft/libft.h"

/* STRUCTS */

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				value;
	size_t			index;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	size_t			size;
	char			name;
}					t_stack;

/* LIST UTILS */

t_node				*new_node(int value);
t_node				*node_front(t_stack *stack, t_node *new);
t_node				*node_back(t_stack *stack, t_node *new);
t_node				*node_drag(t_node *victim);

/* PUSH SWAP MAIN CHECKER */

int					ft_istarget(int target, int c);
int					has_nulls(char **s);
int					has_morethan_digits(char *s);
int					has_spaces(char *s);
int					full_dash_check(char **argv);

/* LIST UTILS*/

#endif