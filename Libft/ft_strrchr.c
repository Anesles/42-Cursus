/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:54:15 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/03 20:58:30 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*f;
	char	*ret;

	f = (char *)s;
	ret = NULL;
	while (*f != '\0')
	{
		if (*f == c)
			ret = f;
		f++;
	}
	return (ret);
}
