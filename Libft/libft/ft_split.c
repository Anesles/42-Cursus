/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:03:05 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/07 18:57:37 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_alloc_array(char const *s, char c, int length)
{
	int		i;
	int		count;
	char	**array;

	i = 0;
	count = 0;
	while (s[i] == c || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (i < (length + 1))
	{
		if ((s[i] == c && s[i - 1] != c))
			count++;
		else if (s[i] == 0 && (s[i - 1] != c || s[i - 1] == ' '
				|| s[i - 1] == '\t' || s[i - 1] == '\n'))
			count++;
		i++;
	}
	array = (char **)malloc(sizeof(s) * (count + 1));
	if (!array)
		return (NULL);
	return (array);
}

static char	*ft_split_range(int start, int finish, char const *s)
{
	int		length;
	int		i;
	char	*str;

	i = 0;
	length = finish - start;
	str = (char *)malloc(length + 1 * sizeof(*s));
	while (start < finish)
	{
		if (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			start++;
		else
			str[i++] = s[start++];
	}
	str[i] = 0;
	return (str);
}

static char	**ft_split_string(char **array, char const *s, char c, int length)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] == c || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	while (i < length)
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == 0))
		{
			if (s[i + 1] == 0 && s[i] != c)
				array[j++] = ft_split_range(start, i + 1, s);
			else
				array[j++] = ft_split_range(start, i, s);
			while (s[i] == c)
				i++;
			start = i;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		length;

	length = ft_strlen(s);
	array = ft_alloc_array(s, c, length);
	array = ft_split_string(array, s, c, length);
	return (array);
}
