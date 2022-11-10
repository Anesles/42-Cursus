/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:12:20 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/10 18:04:23 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		count_minus;
	int		n;

	str = (char *)nptr;
	count_minus = 1;
	n = 0;
	while ((*str == ' ' || !ft_isprint(*str)) && *str != '\e')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count_minus = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n * count_minus);
}
