/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:39:41 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/16 16:33:46 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

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

int	ft_hex(long long int p, char c)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	len = 0;
	if (p < 0)
	{
		p = -p;
		len++;
	}
	if (p >= 16)
		len += ft_hex(p / 16, c);
	if (c == 'X')
		write(1, &hex[p % 16], 1);
	else
		write(1, &hex[p % 16], 1);
	return (len + 1);
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
		len++;
	}
	if (n >= 10)
		len += ft_int(n / 10);
	write(1, &base[n % 10], 1);
	return (len + 1);
}
