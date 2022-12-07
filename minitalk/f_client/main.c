/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:50:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/07 00:15:40 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	encoder(int pid, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 7;
		while (j >= 0)
		{
			if (str[i] & (1 << j))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(5);
			j--;
		}
		i++;
	}
}

int	main(int argc, char const *argv[])
{
	int		pid;
	int		i;
	int		j;

	if (argc != 3)
	{
		ft_printf("Error\nBad number of arguments");
		exit(EXIT_FAILURE);
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	encoder(pid, argv[2]);
	return (0);
}
