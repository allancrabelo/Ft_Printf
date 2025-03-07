/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:11:09 by aaugusto          #+#    #+#             */
/*   Updated: 2025/03/06 23:52:00 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(int nb)
{
	int len;
	
	len = 0;
	if (nb == -2147483648)
	{
		len += ft_putstr("-2147483648");
		return (len);
	}
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		len += ft_putnumber(nb / 10);
	}
	len += ft_putchar((nb % 10) + '0');
	return (len);
}