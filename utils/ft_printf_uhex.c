/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:01:27 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/06 09:55:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>
#include <limits.h>

int	ft_printf_uhex(unsigned long int nbr, unsigned long int base,
		int addr_flag, int caps)
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
	while (nbr > 4294967295 && addr_flag == 2)
		nbr = nbr % 4294967295;
	ret++;
	if (nbr / base > 0)
		ret += ft_printf_uhex(nbr / base, base, 0, caps);
	if (nbr % base > 9 && nbr % base <= base)
		ft_printf_putchar((nbr % base) + caps);
	else
		ft_printf_putchar(nbr % base + '0');
	return (ret);
}
