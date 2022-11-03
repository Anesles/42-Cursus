/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:05:55 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 11:31:07 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int	i;
	unsigned int	count;
	size_t  len_src;

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
/* 
int main(void)
{
    char    s[20] = "Ola eu sou o Bruno";
    char    t[20] = "EU não quero saber";
    char    s_[20] = "Ola eu sou o Bruno";
    char    t_[20] = "EU não quero saber";

    printf("Length of string created: %zu\nString created: %s\n\n", ft_strlcpy(t, s, 10), t);
    printf("How it should be:\n");
    printf("Length of string created: %zu\nString created: %s\n", strlcpy(t_, s_, 10), t_);
}
*/