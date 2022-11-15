/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:05:03 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/15 23:03:18 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	detect_args(char *s, va_list args)
{
	char	next;
	int		len;

	len = -2;
	next = *s;
	if (next == 'c')
		len += print_char(args);
	else if (next == 's')
		len += print_string(args);
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
	int		i;

	i = 0;
	va_start(args, str);
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == '%')
		{
			len += detect_args(&((char *)str)[i + 1], args);
			i += 2;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (len);
}

int	main()
{
	int	i1;
	int	i2;
	
	i1 = ft_printf("Eu so sei %c %s\n", 'd', "teste");
	i2 = printf("Eu so sei %c %s\n", 'd', "teste");
	printf("%d should be %d", i1, i2);
}