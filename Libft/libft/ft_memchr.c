/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:15:31 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/07 22:30:39 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*t;

	t = (char *)s;
	while (n > 0)
	{
		if (*t == c)
			return (t);
		t++;
		n--;
	}
	return (NULL);
}
