/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:13:31 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/18 10:44:31 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversions(char c, va_list arglist)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arglist, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arglist, char *)));
	else if (c == 'p')
		return (ft_putpointer(va_arg(arglist, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnumber(va_arg(arglist, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(arglist, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(arglist, unsigned int), 'a'));
	else if (c == 'X')
		return (ft_puthex(va_arg(arglist, unsigned int), 'A'));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	size_t	i;
	int		len;

	i = -1;
	len = 0;
	va_start(arglist, str);
	while (str[++i])
	{
		if (str[i] == '%')
			len += ft_conversions(str[++i], arglist);
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
	}
	va_end(arglist);
	return (len);
}
/*  int	main(void)
{
	char c = 'c';
	char *str = "string";
	int ptr = 42;
	long int nbr = -21474836480;
	int nbr2 = 42;
	ft_printf("Print char 'c': %c", c);
	ft_printf("\n");
	ft_printf("Print string 'string': %s", str);
	ft_printf("\n");
	ft_printf("Print pointer 'ptr': %p", &ptr);
	ft_printf("\n");
	ft_printf("Print number 'nbr': %d", nbr);
	ft_printf("\n");
	ft_printf("Print number 'nbr2': %i", nbr2);
	ft_printf("\n");
	ft_printf("Print Unsigned 'nbr': %u", 22222222222222222222222);
	ft_printf("\n");
	printf("Print Unsigned 'nbr': %u", NULL);
	ft_printf("\n");
	return (0);
}  */