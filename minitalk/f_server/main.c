/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:50:11 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/06 18:26:56 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	handler(int	signal)
{
	static int				i;
	static unsigned	char	c;
	
	if (!c)
		c = 0;
	if (!i)
		i = 0;
	c <<=1;
	c += (signal == SIGUSR1);
	if (++i == 8)
	{
		ft_putchar_fd(c, 1);
		i = 0;
		c = 0;
	}
	ft_printf("%d\n", i);
}

int	main(void)
{
	ft_printf("PID: %d", getpid());
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
	}
}