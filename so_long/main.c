/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:42:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 16:02:13 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	get_lines(int fd)
{
	int		len;
	char	*line;

	len = 0; 
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return (len);
		len++;
	}
}

char	**get_map(int fd, char	*file)
{
	int		len_lines;
	int		i;
	char	**map;

	len_lines = get_lines(fd);
	map = (char **)malloc(len_lines * sizeof(char *));
	if (!map)
		return (NULL);
	close(fd);
	fd = open(file, O_RDONLY);
	i = 0;
	while (i < len_lines)
	{
		map[i] = get_next_line(fd);
		if (!map[i])
		{
			free(map);
			return (NULL);
		}
		i++;
	}
	return (map);
}

int	main(int argc, char *argv[])
{
	char	**map;
	int		fd;
	int		i;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		map = get_map(fd, (char *)argv[1]);
	}
	i = 0;
	while (i < 5)
	{
		ft_printf("%s", map[i]);
		i++;
	}
}
