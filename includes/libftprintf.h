/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:10:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/18 08:55:16 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdbool.h>

# if defined (__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# endif

# ifndef CONVERSION
#  define CONVERSION "cspdiuxX%"
# endif

typedef struct s_list_printf
{
	int		i;
	int		ret;
	bool	flag_zero;
	bool	flag_hyphen;
	bool	flag_precision;
	int		precision_width;
	bool	flag_hashtag;
	bool	flag_space;
	bool	flag_plus;
	int		width;
}			t_list_printf;

# ifndef FT_PRINTF
#  define FT_PRINTF

int				ft_printf(const char *str, ...);
# endif

# ifndef FT_PRINTF_C
#  define FT_PRINTF_C

void			ft_printf_c(int c, t_list_printf *list);
# endif
# ifndef FT_PRINTF_S
#  define FT_PRINTF_S

void			ft_printf_s(char *str, t_list_printf *list);
# endif

# ifndef FT_PRINTF_PUTNBR
#  define FT_PRINTF_PUTNBR

void			ft_printf_putnbr(int nbr, t_list_printf *list);
# endif

# ifndef FT_PRINTF_PUTNBR_BASE
#  define FT_PRINTF_PUTNBR_BASE

void			ft_printf_putnbr_base(int64_t nbr, int64_t base, int caps,
					t_list_printf *list);
# endif

# ifndef FT_PRINTF_UHEX
#  define FT_PRINTF_UHEX

void			ft_printf_uhex(unsigned long int nbr, unsigned long int base,
					int addr_flag, int caps);

# endif

# ifndef FT_PRINTF_PARSE
#  define FT_PRINTF_PARSE

void			ft_printf_parse(const char *str, t_list_printf *list);
# endif

# ifndef FT_LSTRESET
#  define FT_LSTRESET

void			ft_lstreset(t_list_printf *list);
# endif
#endif
