/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:45:24 by brumarti          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/05 14:26:45 by brumarti         ###   ########.fr       */
=======
/*   Updated: 2022/12/02 01:02:09 by brumarti         ###   ########.fr       */
>>>>>>> 7127c695e45a9ceddfa68261d2b6369b25cafce9
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	animations(t_vars *vars)
{
	mlx_destroy_image(vars->mlx.ptr, vars->imgs.p.ptr);
	mlx_put_image_to_window(vars->mlx.ptr, vars->mlx.win, \
		vars->imgs.p2.ptr, vars->map.p_pos[1] * 50, vars->map.p_pos[0] * 50);
	usleep(50000);
	mlx_destroy_image(vars->mlx.ptr, vars->imgs.p2.ptr);
	mlx_put_image_to_window(vars->mlx.ptr, vars->mlx.win, \
		vars->imgs.p.ptr, vars->map.p_pos[1] * 50, vars->map.p_pos[0] * 50);
	return (0);
}
