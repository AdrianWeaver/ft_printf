/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:10:48 by aweaver           #+#    #+#             */
/*   Updated: 2021/12/19 09:09:09 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# if defined (__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# endif

# ifndef FT_PRINTF
#  define FT_PRINTF

int	ft_printf(const char *str, ...);
# endif

# ifndef FT_PRINTF_PUTCHAR
#  define FT_PRINTF_PUTCHAR

int	ft_printf_putchar(char c);
# endif
# ifndef FT_PRINTF_PUTSTR
#  define FT_PRINTF_PUTSTR

int	ft_printf_putstr(char *str);

# endif

#endif
