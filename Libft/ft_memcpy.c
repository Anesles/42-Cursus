/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:11:12 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/02 18:22:31 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	const unsigned char	*t;

	p = dest;
	t = src;
	while(n--)
	{
		*p = *t;
		p++;
		t++; 
	}
	return (dest);
}

int	main(void)
{
	char	s[10] = "Testeteste";
	char	t[9] = "marcopolo";

	ft_memcpy(s, t, 5);
	printf("%s\n", s);
}