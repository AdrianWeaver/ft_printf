/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:35:18 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/27 17:05:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int	main(void)
{
	unsigned int		tab[5];
	int					i;
	int					total;

	i = 2;
	tab[0] = 42;
	tab[1] = 2;
	tab[2] = 0;
	tab[3] = INT_MAX;
	tab[4] = UINT_MAX;
	while (i < 3)
	{
		total = 0;
		total += printf("01 - vrai printf %%.x    : %.x\n", tab[i]);
		total += printf("02 - vrai printf %%.0x   : %.0x\n", tab[i]);
		total += printf("03 - vrai printf %%5.x   : %5.x\n", tab[i]);
		total += printf("04 - vrai printf %%5.0x  : %5.0x\n", tab[i]);
		total += printf("05 - vrai printf %%-5.0x : %-5.0x\n", tab[i]);
		total += printf("06 - vrai printf %%-5.x  : %-5.x\n", tab[i]);
		printf("%x vrai printf total printed : %i\n", tab[i], total);
		total = 0;
		total += ft_printf("01 - faux printf %%.x    : %.x\n", tab[i]);
		total += ft_printf("02 - faux printf %%.0x   : %.0x\n", tab[i]);
		total += ft_printf("03 - faux printf %%5.x   : %5.x\n", tab[i]);
		total += ft_printf("04 - faux printf %%5.0x  : %5.0x\n", tab[i]);
		total += ft_printf("05 - faux printf %%-5.0x : %-5.0x\n", tab[i]);
		total += ft_printf("06 - faux printf %%-5.x  : %-5.x\n", tab[i]);
		printf("[%x] faux printf total printed : %i\n", tab[i], total);
		i++;
	}
}
