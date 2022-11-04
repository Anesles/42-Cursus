/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:03:05 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/04 19:16:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_alloc_array(char const *s, char c)
{
	int		i;
	int		count;
	char	**array;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] != c)
			count++;
		i++;
	}
	printf("%d\n", count);
	array = (char **)malloc(sizeof(s) * (count + 1));
	if (!array)
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**array;

	array = ft_alloc_array(s, c);
	
	return (NULL);
}

int	main(void)
{
	ft_split("Eu só sei que nada sei", ' ');
}
