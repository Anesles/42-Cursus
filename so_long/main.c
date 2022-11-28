/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:42:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/26 02:16:13 by brumarti         ###   ########.fr       */
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
		if (!line)
			return (len);
		free(line);
		len++;
	}
}

static t_map	get_map(int fd, char *file)
{
	int		i;
	t_map	map;

	map.n_lines = get_lines(fd);
	map.map = (char **)malloc(map.n_lines * sizeof(char *));
	if (!map.map)
		send_error("Error\nFailed map alloc.");
	close(fd);
	fd = open(file, O_RDONLY);
	i = 0;
	while (i < map.n_lines)
	{
		map.map[i] = ft_strtrim(get_next_line(fd), "\n\r\t\v\f");
		if (!map.map[i])
		{
			free(map.map);
			send_error("Error\nFailed map[] alloc.");
		}
		i++;
	}
	return (map);
}

int	main(int argc, char *argv[])
{
	t_map	map;
	int		fd;
	void	*mlx;
	void	*mlx_win;

	map.map = 0;
	if (argc == 2)
	{
		if (!ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])))
			send_error("Error\nBad file extension.");
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			send_error("Error\nFailed to open file.");
		map = get_map(fd, (char *)argv[1]);
		check_valid(&map);
		mlx = mlx_init();
		mlx_new_window(mlx, 1920, 1080, "Teste");
		mlx_loop(mlx);
	}
	else
		send_error("Error\nMore than 1 argument.");
}
