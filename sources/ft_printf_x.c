/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:57:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/26 11:33:15 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h>

static void	x_noflag(char *str, t_list_printf *list)
{
	int	str_len;

	str_len = ft_strlen_int(str);
	if (list->flag_hyphen == 0 && list->flag_zero == 0)
	{
		while (list->width > str_len)
		{
			list->ret += ft_putchar(' ');
			list->width--;
		}
	}
}

static char	*x_hashtag(const char *src, char *str, t_list_printf *list)
{
	char	*tmp;
	char	*dummy;

	if (list->flag_hashtag == 1)
	{
		dummy = malloc(sizeof(*dummy) * 3);
		dummy[0] = '0';
		dummy[1] = src[list->i];
		dummy[2] = 0;
		tmp = ft_strjoin(dummy, str);
		free(str);
		free(dummy);
		str = tmp;
	}
	return (str);
}

static char	*x_precision(char *str, t_list_printf *list)
{
	int		str_len;
	char	*tmp;
	char	*dummy;

	str_len = ft_strlen_int(str);
	dummy = ft_strdup("0");
	if (list->flag_zero == 1 && list->flag_precision != 1)
	{
		if (list->flag_hashtag == 1)
			str_len += 2;
		while (str_len < list->width)
		{
			tmp = ft_strjoin(dummy, str);
			free(str);
			str = tmp;
			str_len++;
		}
	}
	if (list->flag_precision == 1)
	{
		while (str_len < list->precision_width)
		{
			tmp = ft_strjoin(dummy, str);
			free(str);
			str = tmp;
			str_len++;
		}
	}
	free(dummy);
	return (str);
}

void	ft_printf_x(unsigned int unbr, t_list_printf *list, const char *src)
{
	char	*str;

	if (src[list->i] == 'x')
		str = ft_utoa_base(unbr, 16, "0123456789abcdef");
	else
		str = ft_utoa_base(unbr, 16, "0123456789ABCDEF");
	ft_printf_check_flags(list);
	str = x_precision(str, list);
	if (unbr != 0)
		str = x_hashtag(src, str, list);
	x_noflag(str, list);
	list->ret += ft_putstr(str);
	list->width -= ft_strlen_int(str);
	ft_flag_hyphen(list);
	list->i++;
	free(str);
}
