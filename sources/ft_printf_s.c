/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:59:49 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/27 16:45:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h>

static void	s_noflag_width(char *str, t_list_printf *list)
{
	int	str_len;

	if (list->flag_hyphen == 0 && list->width > 0)
	{
		if (list->flag_precision == 1)
		{
			if (ft_strlen_int(str) < list->precision_width)
				str_len = ft_strlen(str);
			else
				str_len = list->precision_width;
		}
		else
			str_len = ft_strlen_int(str);
		while ((*str == 0 && list->width > 0) || (list->width > str_len))
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

static void	s_nullstring(char *str, t_list_printf *list)
{
	while ((list->width > 6 && list->flag_hyphen == 0) || (list->width > 0
			&& list->flag_hyphen == 0 && list->flag_precision == 1
			&& list->precision_width < 6))
	{
		list->ret += ft_putchar(' ');
		list->width--;
	}
	if (list->flag_precision == 1)
	{
		if (list->precision_width >= 6)
		{
			list->ret += ft_putstr(str);
			list->precision_width -= 6;
			list->width -= 6;
		}
	}
	else if (list->flag_precision == 0)
	{
			list->ret += ft_putstr(str);
			list->width -= 6;
	}
	ft_flag_hyphen(list);
	free(str);
}

void	ft_printf_s(char *str, t_list_printf *list)
{
	char	*null_str;

	null_str = ft_strdup("(null)");
	if (!str)
	{
		s_nullstring(null_str, list);
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
