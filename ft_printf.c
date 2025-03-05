/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:13:31 by aaugusto          #+#    #+#             */
/*   Updated: 2025/03/05 18:34:54 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_connversions(char c, va_list arglist)
{
	if(c == 'c')
		return (ft_putchar(va_arg(arglist, int)));
	return (0);
}

int		ft_printf(const char *str, ...)
{
	va_list	arglist;
	size_t	i;
	int		len;

	i = -1;
	len = 0;
	va_start(arglist, str);
	while(str[++i])
	{
		if (str[i] == '%')
			len += ft_connversions(str[++i],arglist);
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
	}
	return (len);
}
int	main(void)
{
	ft_printf("Print char 'c' %c", 'c');
	return (0);
}