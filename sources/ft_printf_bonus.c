/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:02:21 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 18:35:53 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf_conversion(const char *str, t_list_printf *list, va_list params)
{
	if (str[list->i] == 'c')
		ft_printf_putchar(va_arg(params, int), list);
	if (str[list->i] == 's')
		ft_printf_putstr(va_arg(params, char *), list);
	if (str[list->i] == 'i' || str[list->i] == 'd')
		ft_printf_putnbr_base(va_arg(params, int), 10, 0);
	if (str[list->i] == 'u')
		ft_printf_uhex(va_arg(params, unsigned int), 10, 2, 0);
	if (str[list->i] == 'p')
		ft_printf_uhex(va_arg(params, unsigned long int), 16, 1, 87);
	if (str[list->i] == 'x')
		ft_printf_uhex(va_arg(params, unsigned int), 16, 2, 87);
	if (str[list->i] == 'X')
		ft_printf_uhex(va_arg(params, unsigned int), 16, 2, 55);
	else if (str[list->i] == '%')
	{
		ft_putchar_fd('%', 1);
		list->ret++;
	}
	return (list->ret);
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
		else if (str[list.i] == '%')
		{
			ft_lstreset(&list);
			ft_printf_parse(str, &list);
			ft_printf_conversion(str, &list, params);
		}
	}
	va_end(params);
	return (list.ret);
}
