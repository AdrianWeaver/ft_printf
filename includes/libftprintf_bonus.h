/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:10:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 16:04:18 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

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

int	ft_printf_putchar(unsigned char c);
# endif
# ifndef FT_PRINTF_PUTSTR
#  define FT_PRINTF_PUTSTR

int	ft_printf_putstr(char *str);
# endif

# ifndef FT_STRLEN
#  define FT_STRLEN

int	ft_strlen(char *str);
# endif

# ifndef FT_PRINTF_PUTNBR
#  define FT_PRINTF_PUTNBR

int	ft_printf_putnbr(int nbr);
# endif

# ifndef FT_PRINTF_PUTNBR_BASE
#  define FT_PRINTF_PUTNBR_BASE

int	ft_printf_putnbr_base(int64_t nbr, int64_t base, int caps);
# endif

# ifndef FT_PRINTF_UHEX
#  define FT_PRINTF_UHEX

int	ft_printf_uhex(unsigned long int nbr, unsigned long int base,
		int addr_flag, int caps);
# endif
#endif
