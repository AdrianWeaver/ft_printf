/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putchar_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:25:57 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 17:45:49 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_printf_putchar(unsigned char c, t_list_printf list)
{
	ft_putchar_fd(c, 1);
	if (list->flag_hyphen == 1 && list->width > 1)
	{
		list->width--;
		while (list->width != 0)
		{
			ft_putchar_fd(' ', 1);
			list->width--;
		}
}
