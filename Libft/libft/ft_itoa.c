/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:46:23 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/08 12:53:10 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_n(int n, char *ret, int is_neg, size_t size)
{

	if (is_neg)
	{
		ret[0] = '-';
		ret[size + 1] = 0;
	}
	else
	{
		ret[size] = 0;
		size--;
	}
	while (n != 0)
	{
		ret[size--] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}

static char	*ft_alloc(int n, size_t size)
{
	char	*ret;

	if (n < 0)
	{
		ret = (char *)malloc((size + 2) * sizeof(*ret));
	}
	else
		ret = (char *)malloc((size + 1) * sizeof(*ret));
	return (ret);
}

char	*ft_itoa(int n)
{
	size_t	size;
	int		neg;
	int		number;
	char	*ret;

	size = 0;
	neg = 0;
	number = n;
	while (number)
	{
		number /= 10;
		size++;
	}
	ret = ft_alloc(n, size);
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	if (!ret)
		return (NULL);
	ret = ft_get_n(n, ret, neg, size);
	return (ret);
}
