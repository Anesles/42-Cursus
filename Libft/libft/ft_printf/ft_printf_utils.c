/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:39:41 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:59 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	length;

	if (s)
	{
		length = ft_strlen(s);
		write(fd, s, length);
	}
}

void	ft_hex(long int p, char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (p < 0)
		p = (4294967295 - (p * -1)) + 1;
	if (p >= 16)
	{
		ft_hex(p / 16, c);
		ft_hex(p % 16, c);
	}
	else
		write(1, &base[p], 1);
}

void	ft_ptr(unsigned long long p)
{
	char	*base;

	base = "0123456789abcdef";
	if (p >= 16)
	{
		ft_ptr(p / 16);
		ft_ptr(p % 16);
	}
	else
		write(1, &base[p], 1);
}

int	ft_int(int n)
{
	char	*base;
	int		len;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	base = "0123456789";
	len = 0;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		len++;
	}
	if (n >= 10)
		len += ft_int(n / 10);
	write(1, &base[n % 10], 1);
	return (len + 1);
}
