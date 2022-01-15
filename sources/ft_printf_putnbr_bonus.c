/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:15:38 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/04 23:18:08 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf_putnbr(int nb)
{
	int		ret;
	int64_t	nbr;

	nbr = (int64_t)nb;
	ret = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_printf_putchar('-');
		ret++;
	}
	ret++;
	if (nbr / 10 > 0)
	{
		ret += ft_printf_putnbr(nbr / 10);
	}
	ft_printf_putchar(nbr % 10 + '0');
	return (ret);
}
