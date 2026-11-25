/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:29:27 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 12:43:55 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* SYSTEM LIBRARIES */
# include <limits.h> //Para el valor máximo de int
# include <stddef.h>

/* OWN LIBRARIES */
# include "libft/libft.h"
# include "printf/ft_printf.h"

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

/* STACK UTILS*/

t_stack				*new_stack(char name);
void				print_stack(t_stack *src);
unsigned int		stacksize(t_stack *stack);

/* LIST UTILS */

t_node				*new_node(int value);
t_node				*node_front(t_stack *stack, t_node *new);
t_node				*node_back(t_stack *stack, t_node *new);
t_node				*node_drag(t_stack *origin, t_node *victim);

long long			ft_stacksize(t_node *lst);

/* OPERATIONS */

void				swap(t_stack *src);
void				push(t_stack *src, t_stack *dst, t_node *node);
void				rotate(t_stack *src);
void				r_rotate(t_stack *src);

void				sa(t_stack *a);
void				pa(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rra(t_stack *a);

void				sb(t_stack *b);
void				pb(t_stack *b, t_stack *a);
void				rb(t_stack *b);
void				rrb(t_stack *b);

/* FROM ARGV TO NODE FUNCTIONS */

int					num_to_node(t_stack *a, char *s);
int					string_to_node(t_stack *a, char *s);

int					is_too_much_for_int(char *s);
long				ft_atol(char *nptr);

/* PUSH SWAP MAIN CHECKER */

int					ft_istarget(int target, int c);
int					has_nulls(char **s);
int					has_morethan_digits(char *s);
int					has_spaces(char *s);
int					full_dash_check(char **argv);

/* LIST UTILS*/

#endif