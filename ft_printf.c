/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:02:21 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 16:03:07 by aweaver          ###   ########.fr       */
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
		ret += ft_printf_putstr(va_arg(params, char *));
	if (str == 'i' || str == 'd')
		ret += ft_printf_putnbr_base(va_arg(params, int), 10, 0);
	if (str == 'u')
		ret += ft_printf_uhex(va_arg(params, unsigned int), 10, 2, 0);
	if (str == 'p')
		ret += ft_printf_uhex(va_arg(params, unsigned long int), 16, 1, 87);
	if (str == 'x')
		ret += ft_printf_uhex(va_arg(params, unsigned int), 16, 2, 87);
	if (str == 'X')
		ret += ft_printf_uhex(va_arg(params, unsigned int), 16, 2, 55);
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
