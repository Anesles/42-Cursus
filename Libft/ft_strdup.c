/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:35:04 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 22:39:19 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		length;
	char	*ret;

	length = ft_strlen(s);
	ret = malloc(length * sizeof(char));
	while (length >= 0)
	{
		ret[length] = s[length];
		length--; 
	}
	return (ret);
}