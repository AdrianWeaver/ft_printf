/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:43:19 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/18 08:51:55 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

void	ft_printf_c(int c, t_list_printf *list)
{
	int	padding;

	padding = 0;
	if (list->flag_hyphen == 1)
		padding = list->width;
	ft_putchar_fd(c, 1);
	list->ret++;
	while (padding != 0)
	{
		ft_putchar_fd(' ', 1);
		list->ret++;
	}
}
