/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:25:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/02/14 11:10:49 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static void	ft_printf_parseloop(const char *str, t_list_printf *list)
{
	while (ft_strchr(FLAG, str[list->i]))
	{
		if (str[list->i] == '0')
			list->flag_zero = 1;
		if (str[list->i] == '-')
			list->flag_hyphen = 1;
		if (str[list->i] == '+')
			list->flag_plus = 1;
		if (str[list->i] == ' ')
			list->flag_space = 1;
		if (str[list->i] == '#')
			list->flag_hashtag = 1;
		list->i++;
	}
}

static void	ft_printf_check_star(const char *str, t_list_printf *list,
		va_list params, int precision)
{
	if (str[list->i] == '*' && precision == 0)
	{
		list->width = va_arg(params, int);
		list->i++;
	}
	else if (str[list->i] == '*' && precision == 1)
	{
		list->precision_width = va_arg(params, int);
		list->i++;
	}
}

void	ft_printf_parse(const char *str, t_list_printf *list, va_list params)
{
	ft_lstreset(list);
	if (str[list->i] && ft_strchr(CONVERSION, str[list->i]) == 0)
	{
		ft_printf_parseloop(str, list);
		ft_printf_check_star(str, list, params, 0);
		if (ft_isdigit(str[list->i]) == 1 && list->flag_precision == 0)
		{
			list->width = ft_atoi(&str[list->i]);
			while (ft_isdigit(str[list->i]) == 1)
			{
				list->i++;
			}
		}
		if (str[list->i] == '.')
		{
			list->flag_precision = 1;
			list->i++;
			list->precision_width = ft_atoi(&str[list->i]);
			while (ft_isdigit(str[list->i]) == 1)
				list->i++;
			ft_printf_check_star(str, list, params, 1);
		}
	}
	ft_printf_check_flags(list);
}
