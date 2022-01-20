/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:30:34 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/21 00:22:21 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static void	u_make_magic(t_list_printf *list, unsigned int nbr)
{
	while ((list->flag_precision == 1 && list->precision_width == 0
			&& list->flag_zero == 0 && list->flag_hyphen == 0
			&& nbr == 0) && (list->width > 0))
	{
		list->ret += ft_putchar(' ');
		list->width--;
	}
}

static void	u_nohyphen_flag(char *str, t_list_printf *list)
{
	int	str_len;

	if (list->flag_hyphen == 0 && list->flag_zero == 0 && list->width > 1)
	{
		str_len = ft_strlen(str);
		while (list->width > str_len)
		{
			list->ret += ft_putchar(' ');
			list->width--;
		}
	}
	if (list->flag_hyphen == 0 && list->flag_zero == 1 && list->width > 1)
	{
		str_len = ft_strlen(str);
		while (list->width > str_len)
		{
			list->ret += ft_putchar('0');
			list->width--;
		}
	}
}

static char	*u_flag_precision(char *tmp, t_list_printf *list,
		unsigned int unbr)
{
	char	*str;
	int		str_len;

	str_len = (int)ft_strlen(tmp);
	if (list->flag_precision == 1 && list->precision_width == 0 && unbr == 0)
	{
		*tmp = 0;
		return (tmp);
	}
	if (list->precision_width < 0)
		list->flag_precision = 0;
	if (list->flag_precision == 1)
	{
		while (list->precision_width > str_len)
		{
			str = ft_strjoin("0", tmp);
			list->precision_width--;
			free(tmp);
			tmp = str;
		}
	}
	return (str);
}

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
	str = u_flag_precision(str, list, unbr);
	u_nohyphen_flag(str, list);
	u_make_magic(list, unbr);
	list->ret += ft_putstr(str);
	list->width -= ft_strlen(str);
	u_flag_hyphen(list);
	list->i++;
	free(str);
}
