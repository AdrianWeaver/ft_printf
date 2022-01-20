/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:30:34 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/20 19:33:05 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static void	u_noflag_width(char *str, t_list_printf *list)
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

//static void	u_flag_zero(char *str, t_list_printf *list)
//{
//}

static void	u_flag_hyphen(t_list_printf *list)
{
	if (list->flag_hyphen == 1)
	{
		while (list->width > 0)
		{
			list->ret += ft_putchar(' ');
			list->width--;
		}
	}
}

void	ft_printf_u(unsigned int unbr, t_list_printf *list)
{
	char	*str;

	str = ft_uitoa_base((size_t)unbr, 10, "0123456789");
	while ((list->flag_zero == 1 && list->flag_hyphen == 0)
		&& (list->width > (int)ft_strlen(str)))
	{
		ft_strjoin("0", str);
		list->width--;
		u_noflag_width(str, list);
	}
	list->ret += ft_putstr(str);
	list->width -= ft_strlen(str);
	u_flag_hyphen(list);
	list->i++;
	free(str);
}
