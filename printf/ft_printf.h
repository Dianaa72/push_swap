/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:00:39 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/21 18:37:22 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* SYSTEM LIBRARIES */
# include <stdarg.h>

/* UTILS */

int		int_len(int n);
int		uint_len(unsigned int n);
int		putlong_base(const char *base, unsigned long num);
void	ft_putuint_fd(unsigned int n, int fd);

/* PRINTER FUNCTIONS */

int		print_char(va_list args, int printer);
int		print_string(va_list args, int printer);
int		print_int(va_list args, int printer);
int		print_uint(va_list args, int printer);
int		print_hex(va_list args, int printer, char ox, char somecase);

/* PROTOTYPES */

int		ft_printf(char const *format, ...);

#endif