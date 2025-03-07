/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:13:31 by aaugusto          #+#    #+#             */
/*   Updated: 2025/03/07 00:07:24 by aaugusto         ###   ########.fr       */
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
		return (ft_print_pointer(va_arg(arglist, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnumber(va_arg(arglist, int)));
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
			len += ft_conversions(str[++i],arglist);
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
	}
	va_end(arglist);
	return (len);
}
int	main(void)
{
	char c = 'c';
	char *str = "string";
	int ptr = 42;
	int	nbr = -2147483648;
	int nbr2 = 42;
	ft_printf("\n");
    ft_printf("███████╗████████╗      ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗\n");
    ft_printf("██╔════╝╚══██╔══╝      ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝\n");
    ft_printf("█████╗     ██║         ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  \n");
    ft_printf("██╔══╝     ██║         ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  \n");
    ft_printf("██║        ██║ ██████║ ██║     ██║  ██║██║██║ ╚████║   ██║   ██║     \n");
    ft_printf("╚═╝        ╚═╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     \n");
    ft_printf("                                                     by: Allan Rabelo\n");
	ft_printf("\n");
	ft_printf("\n");
	
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
	
	return (0);
}