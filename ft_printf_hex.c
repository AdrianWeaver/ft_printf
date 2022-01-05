/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:35:54 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 11:52:53 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>

int	ft_printf_hex(int64_t nbr, int64_t base, int addr_flag)
{
	int		ret;

	ret = 0;
	if (addr_flag == 1)
	{
		if (nbr == 0)
		{
			ret += ft_printf_putstr(PTR_NULL);
			return (ret);
		}
		ret += ft_printf_putstr("0x");
	}
	if (nbr < 0)
	{
		ret += ft_printf_putchar('-');
		nbr = -nbr;
	}
	ret++;
	if (nbr / base > 0)
		ret += ft_printf_hex(nbr / base, base, 0);
	if (nbr % base > 9 && nbr % base <= base)
		ft_printf_putchar((nbr % base) - 10 + 'a');
	else
		ft_printf_putchar(nbr % base + '0');
	return (ret);
}
