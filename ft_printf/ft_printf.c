/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:05:03 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/15 22:34:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	detect_args(char *s, va_list args)
{
	char	next;
	int		len;

	len = -2;
	next = *(s + 1);
	if (next == 'c')
		print_char(args);
	else if (next == 's')
		return 0;
	else if (next == 'p')
		return 0;
	else if (next == 'd' || next == 'i')
		return 0;
	else if (next == 'u')
		return 0;
	else if (next == 'x' || next || 'X')
		return 0;
	else if (next == '%')
	{
		write(1, "%", 1);
		len += 1;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	char	*s;

	va_start(args, str);
	len = ft_strlen(str);
	s = (char *) str;
	while (s)
	{
		if (*s == '%')
			len += detect_args(s, args);
		s++;
	}
	return (len);
}