/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:57:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 21:14:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static char	*x_flag_hashtag(const char *src, t_list_printf *list, char *str)
{
	char	*ret;
	char	tmp[3];

	tmp[0] = '0';
	tmp[1] = src[list->i];
	tmp[2] = '\0';
	if (list->flag_hashtag == 1)
	{
		ret = ft_strjoin(tmp, str);
		free(str);
	}
	return (ret);
}

static void	x_make_magic(t_list_printf *list, unsigned int nbr)
{
	while ((list->flag_precision == 1 && list->precision_width == 0
			&& list->flag_zero == 0 && list->flag_hyphen == 0
			&& nbr == 0) && (list->width > 0))
	{
		list->ret += ft_putchar(' ');
		list->width--;
	}
}

static void	x_nohyphen_flag(char *str, t_list_printf *list)
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

static char	*x_flag_precision(char *tmp, t_list_printf *list,
		unsigned int unbr)
{
	char	*str;
	int		str_len;

	str_len = ft_strlen(tmp);
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
			write(2, "f", 1);
			str = ft_strjoin("0", tmp);
			list->precision_width--;
			free(tmp);
			tmp = str;
		}
	}
	return (str);
}

void	ft_printf_x(unsigned int unbr, t_list_printf *list, const char *src)
{
	char	*str;

	if (src[list->i] == 'x')
		str = ft_uitoa_base((size_t)unbr, 16, "0123456789abcdef");
	else
		str = ft_uitoa_base((size_t)unbr, 16, "0123456789ABCDEF");
	ft_putstr_fd(str, 2);
	str = x_flag_hashtag(src, list, str);
	ft_putstr_fd(str, 2);
	str = x_flag_precision(str, list, unbr);
	ft_putstr_fd(str, 2);
	x_nohyphen_flag(str, list);
	x_make_magic(list, unbr);
	write(2, "k", 1);
	ft_putstr_fd(str, 2);
	list->ret += ft_putstr(str);
	write(2, "l", 1);
	list->width -= ft_strlen(str);
	ft_flag_hyphen(list);
	list->i++;
	free(str);
}
