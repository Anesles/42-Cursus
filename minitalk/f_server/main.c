/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:50:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/07 00:13:58 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	decoder(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i])
	{
		result <<= 1;
		if (str[i] == '1')
			result += 1;
		i++;
	}
	return (result);
}

static void	handler(int signal)
{
	static int	i;
	static char	*c;

	if (!c)
		c = (char *)malloc(sizeof(char) * 8);
	if (!i)
		i = 0;
	if (signal == SIGUSR1)
		c[i] = '1';
	else
		c[i] = '0';
	if (++i == 8)
	{
		ft_printf("%c", decoder(c));
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
	}
}
