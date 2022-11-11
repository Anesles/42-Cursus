/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:54:26 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/11 15:33:54 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char	*line;
	
	if (!line)
		line =(char *) malloc(BUFFER_SIZE * sizeof(char));
	read(fd, line, BUFFER_SIZE);
	printf("%s\n", line);
}

int	main()
{
	int	fd;
	int	i;
	
	fd = open("test", O_RDWR);
	i = 0;
	while (i < 10)
	{
		get_next_line(fd);
		i++;
	}
}	
