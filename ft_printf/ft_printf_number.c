/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:10:55 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/16 16:39:31 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(va_list args)
{
	long long int	p;
	int				len;

	p = va_arg(args, long long int);
	ft_putstr_fd("0x", 1);
	len = ft_hex(p, 'x');
	return (len + 2);
}

int	print_int(va_list args)
{
	int		n;
	int		len;

	n = va_arg(args, int);
	len = ft_int(n);
	return (len);
}

int	print_uint(va_list args)
{
	int		n;
	int		len;

	n = va_arg(args, unsigned int);
	len = ft_int(n);
	return (len);
}

int	print_hex(va_list args, char c)
{
	long int	p;
	int			len;

	p = va_arg(args, long int);
	len = ft_hex(p, c);
	return (len);
}
