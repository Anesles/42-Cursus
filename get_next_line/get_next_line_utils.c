/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:48:41 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/11 15:47:17 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	length;
	char	*f;

	length = ft_strlen(s);
	i = 0;
	while (i <= length)
	{
		if (s[i] == c)
		{
			f = (char *)&s[i];
			return (f);
		}
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
