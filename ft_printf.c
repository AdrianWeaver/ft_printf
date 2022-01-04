/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:02:21 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/04 20:59:38 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_str_parse(char str, va_list params)
{
	int	ret;

	ret = 0;
	if (str == 'c')
		ret += ft_printf_putchar(va_arg(params, int));
	if (str == 's')
		ret += ft_printf_putstr(va_arg(params, char*));
	if (str == 'i')
		ret += ft_printf_putnbr(va_arg(params, int64_t));
	else if (str == '%')
		ret += ft_printf_putchar('%');
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		i;
	int		ret;

	va_start(params, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_printf_putchar(str[i]);
			ret++;
			i++;
		}
		else
		{
			i++;
			ret += ft_str_parse(str[i], params);
			i++;
		}
	}
	return (ret);
}
