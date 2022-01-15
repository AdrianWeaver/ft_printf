/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:31:51 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 18:31:18 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_printf_putstr(char *str, t_list_printf list)
{
	if (str == 0)
	{
		write(1, "(null)", 6);
		list->ret += 6;
	}
	else if (list->flag_hyphen == 0)
	{
		ft_putstr_fd(str, 1);
		list->ret += ft_strlen(str);
	}
	else if (list->flag_hyphen == 1)
	{
		list->ret += list->width;
		while (list->width != 0 || *str == 0)
		{
			ft_putchar_fd(str[i], 1);
			list->width--;
			str++;
		}
		while (list->width != 0)
		{
			ft_putchar_fd(' ', 1);
			list->witdh--;
		}
	}
}
