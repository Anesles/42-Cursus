/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:22:42 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 16:54:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_map
{
	char **map;
	int n_cols;
	int n_lines;
}	t_map;

int		main(int argc, char *argv[]);
void	send_error(char	*message);
void	check_valid(t_map map);

#endif