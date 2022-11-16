/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:30:13 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/16 16:34:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	print_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
