/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:00:09 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/19 15:23:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_printf_p(unsigned long int addr, t_list_printf *list)
{
	int		printed;
	char	*str;

	printed = 0;
	str = ft_uitoa_base((size_t)addr, 16, "0123456789abcdef");
	while ((list->width - ((int)ft_strlen(str) + 2)) > 0)
	{
		if (list->flag_hyphen == 1)
			break ;
		list->ret += ft_putchar(' ');
		list->width--;
	}
	if (addr == 0)
	{
		printed += ((ft_putstr(PTR_NULL)));
	}
	else
	{
		printed += ft_putstr("0x");
		printed += ft_putstr(str);
	}
	list->width -= printed;
	if (list->flag_hyphen == 1)
	{
		while (list->width > 0)
		{
			printed += ft_putchar(' ');
			list->width--;
		}
	}
	list->ret += printed;
	list->i++;
	free(str);
}
