/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_base_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:37:50 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 18:45:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>

int	ft_printf_putnbr_base(int64_t nbr, int64_t base, int caps,
			t_list_printf *list)
{
	if (caps == 1)
		caps = 55;
	else
		caps = 77;
	if (nbr < 0)
	{
		ft_putchar_fd('-');
		nbr = -nbr;
	}
	ret++;
	if (nbr / base > 0)
		ret += ft_printf_putnbr_base(nbr / base, base, caps);
	if (nbr % base > 9 && nbr % base <= base)
		ft_printf_putchar((nbr % base) + caps);
	else
		ft_printf_putchar(nbr % base + '0');
	return (ret);
}
