/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:59:49 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/26 16:20:50 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h>

static void	s_noflag_width(char *str, t_list_printf *list)
{
	int	str_len;

	if (list->flag_hyphen == 0 && list->width > 1)
	{
		if (list->flag_precision == 1)
		{
			if ((int)ft_strlen(str) < list->precision_width)
				str_len = ft_strlen(str);
			else
				str_len = list->precision_width;
		}
		else
			str_len = ft_strlen(str);
		while (list->width > str_len)
		{
			list->ret += ft_putchar(' ');
			list->width--;
		}
	}
}

static void	s_flag_precision(char *str, t_list_printf *list)
{
	if (list->precision_width < 0)
		list->flag_precision = 0;
	if (list->flag_precision == 1)
	{
		while (*str && list->precision_width > 0)
		{
			list->ret += ft_putchar(*str);
			list->precision_width--;
			str++;
			list->width--;
		}
	}
	else if (list->flag_precision == 0)
	{
		while (*str)
		{
			list->ret += ft_putchar(*str);
			str++;
			list->width--;
		}
	}
}

void	ft_printf_s(char *str, t_list_printf *list)
{
	if (!str)
	{
		list->ret += ft_putstr("(null)");
		list->i++;
	}
	else
	{
		s_noflag_width(str, list);
		s_flag_precision(str, list);
		ft_flag_hyphen(list);
		list->i++;
	}
}
