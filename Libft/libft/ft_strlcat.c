/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:42:02 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 12:34:55 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	index;
	unsigned int	len_dest;
	unsigned int	index_dest;

	len_dest = ft_strlen(dst);
	if (len_dest > size)
		return (ft_strlen(src) + size);
	index = 0;
	index_dest = len_dest;
	while (src[index] && index_dest < size - 1)
	{
		dst[index_dest] = src[index];
		index_dest++;
		index++;
	}
	dst[index_dest] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}
