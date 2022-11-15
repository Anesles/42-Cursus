/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:09:53 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/15 23:03:05 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// Utils
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);

// printf
int		ft_printf(const char *str, ...);
int		print_char(va_list args);
int		print_string(va_list args);
#endif