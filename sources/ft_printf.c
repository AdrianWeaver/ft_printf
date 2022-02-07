/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:02:21 by aweaver           #+#    #+#             */
/*   Updated: 2022/02/07 12:24:14 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf_conversion(const char *str, t_list_printf *list, va_list params)
{
	if (str[list->i] == 'c')
		ft_printf_c(va_arg(params, int), list);
	else if (str[list->i] == 's')
		ft_printf_s(va_arg(params, char *), list);
	else if (str[list->i] == 'i' || str[list->i] == 'd')
		ft_printf_id(va_arg(params, int), list);
	else if (str[list->i] == 'u')
		ft_printf_u(va_arg(params, unsigned int), list);
	else if (str[list->i] == 'p')
		ft_printf_p(va_arg(params, unsigned long int), list);
	else if (str[list->i] == 'x')
		ft_printf_x(va_arg(params, unsigned int), list, str);
	else if (str[list->i] == 'X')
		ft_printf_x(va_arg(params, unsigned int), list, str);
	return (list->ret);
}

void	ft_check_percent(const char *str, t_list_printf *list, va_list params)
{
	if (str[list->i] == '%')
	{
		list->i++;
		ft_printf_parse(str, list);
		if ((str[list->i] == '%'))
		{
			list->ret += ft_putchar('%');
			list->i++;
		}
		else
			ft_printf_conversion(str, list, params);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list			params;
	t_list_printf	list;

	va_start(params, str);
	list.i = 0;
	list.ret = 0;
	while (str[list.i])
	{
		if (str[list.i] != '%')
		{
			ft_putchar_fd(str[list.i], 1);
			list.ret++;
			list.i++;
		}
		ft_check_percent(str, &list, params);
	}
	va_end(params);
	return (list.ret);
}
