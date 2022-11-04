/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:30:19 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/04 17:00:38 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*t_big;
	char	*t2_big;
	char	*t_little;

	if (*little == '\0')
		return ((char *)big);
	t_big = (char *)big;
	t_little = (char *)little;
	while (*t_big != '\0' && len-- > 0)
	{
		if (*t_big == *t_little)
		{
			t2_big = t_big;
			while (t2_big == t_little)
			{
				t_little++;
				t2_big++;
			}
			if (*t_little == 0)
				return (t_big);
			t_little = (char *)little;
		}
		t_big++;
	}
	return (NULL);
}
