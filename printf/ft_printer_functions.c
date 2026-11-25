/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:28:41 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 12:20:49 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	print_char(va_list args, int printer)
{
	ft_putchar_fd((char)va_arg(args, int), 1);
	printer++;
	return (printer);
}

int	print_string(va_list args, int printer)
{
	char	*string;

	string = va_arg(args, char *);
	if (!string)
	{
		printer += 6;
		return (write(1, "(null)", 6), printer);
	}
	ft_putstr_fd(string, 1);
	printer += ft_strlen(string);
	return (printer);
}

int	print_int(va_list args, int printer)
{
	int	num_len;
	int	num;

	num = va_arg(args, int);
	num_len = int_len(num);
	ft_putnbr_fd(num, 1);
	printer += num_len;
	return (printer);
}

int	print_uint(va_list args, int printer)
{
	unsigned int	num;
	int				num_len;

	num = va_arg(args, unsigned int);
	num_len = uint_len(num);
	ft_putuint_fd(num, 1);
	printer += num_len;
	return (printer);
}

int	print_hex(va_list args, int printer, char ox, char somecase)
{
	unsigned long	num;

	if (ox == 'y')
		num = va_arg(args, unsigned long);
	else
		num = va_arg(args, unsigned int);
	printer = 0;
	if (ox == 'y')
	{
		if (!num)
		{
			printer += 5;
			return (write(1, "(nil)", 5), printer);
		}
		write(1, "0x", 2);
		printer += 2;
	}
	if (somecase == 'x')
		printer += putlong_base("0123456789abcdef", num);
	if (somecase == 'X')
		printer += putlong_base("0123456789ABCDEF", num);
	return (printer);
}
