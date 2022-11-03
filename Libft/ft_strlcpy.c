/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:05:55 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 12:29:13 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	count;
	size_t			len_src;

	len_src = ft_strlen(src);
	count = 0;
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dst[i] = src[i];
			i++;
			count++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
