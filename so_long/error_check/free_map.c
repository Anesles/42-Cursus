/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:14:58 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/29 15:43:08 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	free_map(char ***map, int lines)
{
	int	i;

	ft_printf("cheguei aqui e fiz magia");
	i = 0;
	while(i < lines)
	{
		free((*map)[i]);
		i++;
	}
	free(*map);
}