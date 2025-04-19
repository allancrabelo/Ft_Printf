/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:25:23 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/19 10:24:34 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	ft_len_puthex(unsigned int n)
{
	size_t	digits = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		digits++;
	}
	return (digits);
}

static void	ft_print_puthex(unsigned int n, char up_or_low)
{
	char	*base;

	if (up_or_low == 'a')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_print_puthex(n / 16, up_or_low);
		ft_print_puthex(n % 16, up_or_low);
	}
	else
	{
		write(1, &base[n], 1);
	}
}

int	ft_puthex(unsigned int n, char up_or_low)
{
	if (n == 0)
		return (write(1, "0", 1));
	ft_print_puthex(n, up_or_low);
	return (ft_len_puthex(n));
}
