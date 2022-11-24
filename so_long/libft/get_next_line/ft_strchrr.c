/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:48:41 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/24 15:53:36 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strchrr(const char *s, int c)
{
	size_t	i;
	size_t	length;

	if (!s)
		return (-1);
	length = ft_strlen(s);
	i = 0;
	while (i <= length)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
