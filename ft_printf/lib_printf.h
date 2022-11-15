/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:09:53 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/15 22:40:29 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);
int		ft_printf(const char *str, ...);
int		print_char(va_list args);
#endif