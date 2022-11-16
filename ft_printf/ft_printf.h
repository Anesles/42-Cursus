/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:09:53 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/16 16:38:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// Utils
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
int		ft_hex(long long int p, char c);
int		ft_int(int n);

// printf
int		ft_printf(const char *str, ...);
int		print_pointer(va_list args);
int		print_char(va_list args);
int		print_string(va_list args);
int		print_int(va_list args);
int		print_uint(va_list args);
int		print_hex(va_list args, char c);
#endif