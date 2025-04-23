/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:19:17 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/23 10:32:57 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_countdig(unsigned int n)
{
	unsigned int	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa_long(unsigned int n)
{
	char			*res;
	unsigned int	dig;
	unsigned int	num;

	num = n;
	dig = ft_countdig(num);
	res = malloc((dig + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[dig--] = '\0';
	if (num == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (num > 0)
	{
		res[dig--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}

int	ft_putunsigned(unsigned int n)
{
	char	*temp;
	size_t	len;

	temp = ft_itoa_long(n);
	if (!temp)
		return (0);
	ft_putstr_fd(temp, 1);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}
