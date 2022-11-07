/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:12:20 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/04 18:27:11 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		count_minus;
	int		n;

	str = (char *)nptr;
	count_minus = 0;
	n = 0;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	if (count_minus % 2 != 0)
		n *= -1;
	return (n);
}
