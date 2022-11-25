/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:42:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 17:31:05 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int	get_lines(int fd)
{
	int		len;
	char	*line;

	len = 0; 
	while (1)
	{
		line = get_next_line(fd);
		if (!line || !ft_isprint(line[0]))
			return (len);
		len++;
	}
}

static t_map get_map(int fd, char	*file)
{
	int		i;
	t_map	map;

	map.n_lines = get_lines(fd);
	map.map = (char **)malloc(map.n_lines * sizeof(char *));
	if (!map.map)
		send_error("failed map alloc.");
	close(fd);
	fd = open(file, O_RDONLY);
	i = 0;
	while (i < map.n_lines)
	{
		map.map[i] = get_next_line(fd);
		if (!map.map[i])
		{
			free(map.map);
			send_error("failed map[] alloc.");
		}
		i++;
	}
	return (map);
}

int	main(int argc, char *argv[])
{
	t_map	map;
	int		fd;
	int		i;

	map.map = 0;
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		map = get_map(fd, (char *)argv[1]);
		check_valid(map);
	}
	i = 0;
	while (i < map.n_lines)
	{
		ft_printf("%s", map.map[i]);
		i++;
	}
}
