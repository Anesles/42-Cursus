/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:04 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/08 00:06:32 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length_s1;
	int		length_s2;

	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, (length_s1 + 1));
	ft_strlcat(str, s2, (length_s1 + length_s2 + 1));
	return (str);
}
