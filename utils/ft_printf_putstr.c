/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:31:51 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 13:40:12 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_putstr(char *str)
{
	int	ret;

	if (str == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ret = ft_strlen(str);
	write(1, str, ret);
	return (ret);
}
