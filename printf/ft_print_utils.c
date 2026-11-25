/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhidalgo <fhidalgo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 00:53:58 by fhidalgo          #+#    #+#             */
/*   Updated: 2026/11/25 12:20:50 by fhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	int_len(int n)
{
	long	nb;
	int		len;

	len = 0;
	nb = n;
	if (n < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	if (n == 0)
		return (1);
	return (len);
}

int	uint_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	if (n == 0)
		return (1);
	return (len);
}

int	putlong_base(const char *base, unsigned long num)
{
	unsigned long	b_len;
	int				count;

	count = 0;
	b_len = ft_strlen(base);
	if (num >= b_len)
		count = putlong_base(base, num / b_len);
	write(1, &base[num % b_len], 1);
	return (count + 1);
}

void	ft_putuint_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
