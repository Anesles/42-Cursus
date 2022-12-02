/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:45:24 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/02 01:02:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	animations(t_vars *vars)
{
	mlx_put_image_to_window(vars->mlx.ptr, vars->mlx.win, \
		vars->imgs.p2.ptr, vars->map.p_pos[1] * 50, vars->map.p_pos[0] * 50);
	usleep(50000);
	mlx_put_image_to_window(vars->mlx.ptr, vars->mlx.win, \
		vars->imgs.p.ptr, vars->map.p_pos[1] * 50, vars->map.p_pos[0] * 50);
	return (0);
}
