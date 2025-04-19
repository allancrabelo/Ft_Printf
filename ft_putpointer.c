/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:09:34 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/17 18:08:56 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putpointer_aux(unsigned long long n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_putpointer_aux(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putpointer(void *pointer)
{
	if (!pointer)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_putpointer_aux((unsigned long long)pointer) + 2);
}
