/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:34:01 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 15:51:59 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = 0;
	while (s[i] != '\0')
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
