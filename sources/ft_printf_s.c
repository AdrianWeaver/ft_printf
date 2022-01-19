/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:59:49 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/19 08:56:44 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_printf_s(char *str, t_list_printf *list)
{
	int	ret;

	ret = 0;
	if (list->flag_precision == 1)
	{
		while (*str && list->precision_width > 0)
		{
			ret += ft_putchar(*str);
			list->precision_width--;
			str++;
		}
	}
	else if (list->flag_precision == 0)
		ret += ft_putstr(str);
	list->width -= ret;
	if (list->flag_hyphen == 1)
	{
		while (list->width > 0)
		{
			ret += ft_putchar(' ');
			list->width--;
		}
	}
	list->i++;
	list->ret += ret;
}
