/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:50:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/06 18:26:28 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main(int argc, char const *argv[])
{
	int		pid;
	int		i;
	int		j;
	char	c;
	
	if (argc != 3)
	{
			ft_printf("Error\nBad number of arguments");
			exit(EXIT_FAILURE);		
	}
	i = 0;
	pid	= ft_atoi(argv[1]);
	while (argv[2][i])
	{
		j = 7;
		while (j >= 0)
		{
			c = ((argv[2][i] & (1 << j--)) ? '1' : '0');
			if (c == 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(50000);
		}
		i++;
	}
	ft_printf("\n");
	return 0;
}
