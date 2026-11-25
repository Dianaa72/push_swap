/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:34:19 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 12:20:48 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	format_printer(char format, va_list args)
{
	int	printer;

	printer = 0;
	if (format == 'c')
		printer += print_char(args, printer);
	if (format == '%')
	{
		ft_putchar_fd('%', 1);
		printer++;
	}
	if (format == 's')
		printer += print_string(args, printer);
	if (format == 'd' || format == 'i')
		printer += print_int(args, printer);
	if (format == 'p')
		printer += print_hex(args, printer, 'y', 'x');
	if (format == 'x')
		printer += print_hex(args, printer, 'n', 'x');
	if (format == 'X')
		printer += print_hex(args, printer, 'n', 'X');
	if (format == 'u')
		printer += print_uint(args, printer);
	return (printer);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		print_chars;

	va_start(args, format);
	print_chars = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			format++;
			print_chars++;
		}
		else
		{
			format++;
			if (*format)
			{
				print_chars += format_printer(*format, args);
				format++;
			}
		}
	}
	va_end(args);
	return (print_chars);
}
