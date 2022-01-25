/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:35:18 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/25 17:21:53 by aweaver          ###   ########.fr       */
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

	i = 0;
	tab[0] = 42;
	tab[1] = 2;
	tab[2] = 0;
	tab[3] = INT_MAX;
	tab[4] = UINT_MAX;
	while (i < 1)
	{
		total = 0;
		total += printf("01 - vrai printf %%x : %x\n", tab[i]);
		total += printf("02 - vrai printf %%x : %1x\n", tab[i]);
		total += printf("03 - vrai printf %%x : %42x\n", tab[i]);
		total += printf("04 - vrai printf %%x : %0x\n", tab[i]);
		total += printf("05 - vrai printf %%x : %01x\n", tab[i]);
		total += printf("06 - vrai printf %%x : %042x\n", tab[i]);
		total += printf("07 - vrai printf %%x : %-x\n", tab[i]);
		total += printf("08 - vrai printf %%x : %-1x\n", tab[i]);
		total += printf("09 - vrai printf %%x : %-42x\n", tab[i]);
		total += printf("10 - vrai printf %%x : %.x\n", tab[i]);
		total += printf("11 - vrai printf %%x : %.1x\n", tab[i]);
		total += printf("12 - vrai printf %%x : %.42x\n", tab[i]);
		//total += printf("12 - vrai printf %%x : %.*x\n", -2, tab[i]);
		total += printf("13 - vrai printf %%x : %1.x\n", tab[i]);
		total += printf("14 - vrai printf %%x : %1.1x\n", tab[i]);
		total += printf("15 - vrai printf %%x : %1.8x\n", tab[i]);
		total += printf("16 - vrai printf %%x : %1.42x\n", tab[i]);
		total += printf("17 - vrai printf %%x : %42.x\n", tab[i]);
		total += printf("18 - vrai printf %%x : %42.1x\n", tab[i]);
		total += printf("19 - vrai printf %%x : %42.8x\n", tab[i]);
		total += printf("20 - vrai printf %%x : %42.42x\n", tab[i]);
		//total += printf("21 - vrai printf %%x : %-0x\n", tab[i]);
		//total += printf("22 - vrai printf %%x : %-01x\n", tab[i]);
		//total += printf("23 - vrai printf %%x : %-042x\n", tab[i]);
		//total += printf("24 - vrai printf %%x : %-0.x\n", tab[i]);
		//total += printf("25 - vrai printf %%x : %-0.1x\n", tab[i]);
		//total += printf("26 - vrai printf %%x : %-0.42x\n", tab[i]);
		total += printf("27 - vrai printf %%x : %-.x\n", tab[i]);
		total += printf("28 - vrai printf %%x : %-.1x\n", tab[i]);
		total += printf("29 - vrai printf %%x : %-.8x\n", tab[i]);
		total += printf("30 - vrai printf %%x : %-.42x\n", tab[i]);
		total += printf("31 - vrai printf %%x : %-1.x\n", tab[i]);
		total += printf("32 - vrai printf %%x : %-1.1x\n", tab[i]);
		total += printf("33 - vrai printf %%x : %-1.8x\n", tab[i]);
		total += printf("34 - vrai printf %%x : %-1.42x\n", tab[i]);
		total += printf("35 - vrai printf %%x : %-42.x\n", tab[i]);
		total += printf("36 - vrai printf %%x : %-42.1x\n", tab[i]);
		total += printf("37 - vrai printf %%x : %-42.8x\n", tab[i]);
		total += printf("38 - vrai printf %%x : %-42.42x\n", tab[i]);
		//total += printf("39 - vrai printf %%x : %0.x\n", tab[i]);
		total += printf("40 - vrai printf %%x : %#x\n", tab[i]);
		total += printf("41 - vrai printf %%x : %#x\n", tab[i]);
		total += printf("42 - vrai printf %%x : %#1x\n", tab[i]);
		total += printf("43 - vrai printf %%x : %#42x\n", tab[i]);
		total += printf("44 - vrai printf %%x : %#0x\n", tab[i]);
		total += printf("45 - vrai printf %%x : %#08x\n", tab[i]);
		total += printf("46 - vrai printf %%x : %#042x\n", tab[i]);
		total += printf("47 - vrai printf %%x : %#-x\n", tab[i]);
		total += printf("48 - vrai printf %%x : %#-1x\n", tab[i]);
		total += printf("49 - vrai printf %%x : %#-42x\n", tab[i]);
		total += printf("50 - vrai printf %%x : %#.x\n", tab[i]);
		total += printf("51 - vrai printf %%x : %#.1x\n", tab[i]);
		total += printf("52 - vrai printf %%x : %#.42x\n", tab[i]);
		total += printf("53 - vrai printf %%x : %#1.x\n", tab[i]);
		total += printf("54 - vrai printf %%x : %#1.1x\n", tab[i]);
		total += printf("55 - vrai printf %%x : %#1.8x\n", tab[i]);
		total += printf("56 - vrai printf %%x : %#1.42x\n", tab[i]);
		total += printf("57 - vrai printf %%x : %#42.x\n", tab[i]);
		total += printf("58 - vrai printf %%x : %#42.1x\n", tab[i]);
		total += printf("59 - vrai printf %%x : %#42.8x\n", tab[i]);
		total += printf("60 - vrai printf %%x : %#42.42x\n", tab[i]);
		//total += printf("61 - vrai printf %%x : %#-0x\n", tab[i]);
		//total += printf("62 - vrai printf %%x : %#-01x\n", tab[i]);
		//total += printf("63 - vrai printf %%x : %#-042x\n", tab[i]);
		//total += printf("64 - vrai printf %%x : %#-0.x\n", tab[i]);
		//total += printf("65 - vrai printf %%x : %#-0.1x\n", tab[i]);
		//total += printf("66 - vrai printf %%x : %#-0.42x\n", tab[i]);
		total += printf("67 - vrai printf %%x : %#-.x\n", tab[i]);
		total += printf("68 - vrai printf %%x : %#-.1x\n", tab[i]);
		total += printf("69 - vrai printf %%x : %#-.8x\n", tab[i]);
		total += printf("70 - vrai printf %%x : %#-.42x\n", tab[i]);
		total += printf("71 - vrai printf %%x : %#-1.x\n", tab[i]);
		total += printf("72 - vrai printf %%x : %#-1.1x\n", tab[i]);
		total += printf("73 - vrai printf %%x : %#-1.8x\n", tab[i]);
		total += printf("74 - vrai printf %%x : %#-1.42x\n", tab[i]);
		total += printf("75 - vrai printf %%x : %#-42.x\n", tab[i]);
		total += printf("76 - vrai printf %%x : %#-42.1x\n", tab[i]);
		total += printf("77 - vrai printf %%x : %#-42.8x\n", tab[i]);
		total += printf("78 - vrai printf %%x : %#-42.42x\n", tab[i]);
		//total += printf("79 - vrai printf %%x : %#08.2x\n", tab[i]);
		//total += printf("80 - vrai printf %%x : %#08.42x\n", tab[i]);
		//total += printf("81 - vrai printf %%x : %#042.x\n", tab[i]);
		printf("%x vrai printf total printed : %i\n", tab[i], total);
		total = 0;
		total += ft_printf("01 - faux printf %%x : %x\n", tab[i]);
		total += ft_printf("02 - faux printf %%x : %1x\n", tab[i]);
		total += ft_printf("03 - faux printf %%x : %42x\n", tab[i]);
		total += ft_printf("04 - faux printf %%x : %0x\n", tab[i]);
		total += ft_printf("05 - faux printf %%x : %01x\n", tab[i]);
		total += ft_printf("06 - faux printf %%x : %042x\n", tab[i]);
		total += ft_printf("07 - faux printf %%x : %-x\n", tab[i]);
		total += ft_printf("08 - faux printf %%x : %-1x\n", tab[i]);
		total += ft_printf("09 - faux printf %%x : %-42x\n", tab[i]);
		total += ft_printf("10 - faux printf %%x : %.x\n", tab[i]);
		total += ft_printf("11 - faux printf %%x : %.1x\n", tab[i]);
		total += ft_printf("12 - faux printf %%x : %.42x\n", tab[i]);
		//total += ft_printf("12 - faux printf %%x : %.*x\n", -2, tab[i]);
		total += ft_printf("13 - faux printf %%x : %1.x\n", tab[i]);
		total += ft_printf("14 - faux printf %%x : %1.1x\n", tab[i]);
		total += ft_printf("15 - faux printf %%x : %1.8x\n", tab[i]);
		total += ft_printf("16 - faux printf %%x : %1.42x\n", tab[i]);
		total += ft_printf("17 - faux printf %%x : %42.x\n", tab[i]);
		total += ft_printf("18 - faux printf %%x : %42.1x\n", tab[i]);
		total += ft_printf("19 - faux printf %%x : %42.8x\n", tab[i]);
		total += ft_printf("20 - faux printf %%x : %42.42x\n", tab[i]);
		//total += ft_printf("21 - faux printf %%x : %-0x\n", tab[i]);
		//total += ft_printf("22 - faux printf %%x : %-01x\n", tab[i]);
		//total += ft_printf("23 - faux printf %%x : %-042x\n", tab[i]);
		//total += ft_printf("24 - faux printf %%x : %-0.x\n", tab[i]);
		//total += ft_printf("25 - faux printf %%x : %-0.1x\n", tab[i]);
		//total += ft_printf("26 - faux printf %%x : %-0.42x\n", tab[i]);
		total += ft_printf("27 - faux printf %%x : %-.x\n", tab[i]);
		total += ft_printf("28 - faux printf %%x : %-.1x\n", tab[i]);
		total += ft_printf("29 - faux printf %%x : %-.8x\n", tab[i]);
		total += ft_printf("30 - faux printf %%x : %-.42x\n", tab[i]);
		total += ft_printf("31 - faux printf %%x : %-1.x\n", tab[i]);
		total += ft_printf("32 - faux printf %%x : %-1.1x\n", tab[i]);
		total += ft_printf("33 - faux printf %%x : %-1.8x\n", tab[i]);
		total += ft_printf("34 - faux printf %%x : %-1.42x\n", tab[i]);
		total += ft_printf("35 - faux printf %%x : %-42.x\n", tab[i]);
		total += ft_printf("36 - faux printf %%x : %-42.1x\n", tab[i]);
		total += ft_printf("37 - faux printf %%x : %-42.8x\n", tab[i]);
		total += ft_printf("38 - faux printf %%x : %-42.42x\n", tab[i]);
		//total += ft_printf("39 - faux printf %%x : %0.x\n", tab[i]);
		total += ft_printf("40 - faux printf %%x : %#x\n", tab[i]);
		total += ft_printf("41 - faux printf %%x : %#x\n", tab[i]);
		total += ft_printf("42 - faux printf %%x : %#1x\n", tab[i]);
		total += ft_printf("43 - faux printf %%x : %#42x\n", tab[i]);
		total += ft_printf("44 - faux printf %%x : %#0x\n", tab[i]);
		total += ft_printf("45 - faux printf %%x : %#08x\n", tab[i]);
		total += ft_printf("46 - faux printf %%x : %#042x\n", tab[i]);
		total += ft_printf("47 - faux printf %%x : %#-x\n", tab[i]);
		total += ft_printf("48 - faux printf %%x : %#-1x\n", tab[i]);
		total += ft_printf("49 - faux printf %%x : %#-42x\n", tab[i]);
		total += ft_printf("50 - faux printf %%x : %#.x\n", tab[i]);
		total += ft_printf("51 - faux printf %%x : %#.1x\n", tab[i]);
		total += ft_printf("52 - faux printf %%x : %#.42x\n", tab[i]);
		total += ft_printf("53 - faux printf %%x : %#1.x\n", tab[i]);
		total += ft_printf("54 - faux printf %%x : %#1.1x\n", tab[i]);
		total += ft_printf("55 - faux printf %%x : %#1.8x\n", tab[i]);
		total += ft_printf("56 - faux printf %%x : %#1.42x\n", tab[i]);
		total += ft_printf("57 - faux printf %%x : %#42.x\n", tab[i]);
		total += ft_printf("58 - faux printf %%x : %#42.1x\n", tab[i]);
		total += ft_printf("59 - faux printf %%x : %#42.8x\n", tab[i]);
		total += ft_printf("60 - faux printf %%x : %#42.42x\n", tab[i]);
		total += ft_printf("61 - faux printf %%x : %#-0x\n", tab[i]);
		//total += ft_printf("62 - faux printf %%x : %#-01x\n", tab[i]);
		//total += ft_printf("63 - faux printf %%x : %#-042x\n", tab[i]);
		//total += ft_printf("64 - faux printf %%x : %#-0.x\n", tab[i]);
		//total += ft_printf("65 - faux printf %%x : %#-0.1x\n", tab[i]);
		//total += ft_printf("66 - faux printf %%x : %#-0.42x\n", tab[i]);
		total += ft_printf("67 - faux printf %%x : %#-.x\n", tab[i]);
		total += ft_printf("68 - faux printf %%x : %#-.1x\n", tab[i]);
		total += ft_printf("69 - faux printf %%x : %#-.8x\n", tab[i]);
		total += ft_printf("70 - faux printf %%x : %#-.42x\n", tab[i]);
		total += ft_printf("71 - faux printf %%x : %#-1.x\n", tab[i]);
		total += ft_printf("72 - faux printf %%x : %#-1.1x\n", tab[i]);
		total += ft_printf("73 - faux printf %%x : %#-1.8x\n", tab[i]);
		total += ft_printf("74 - faux printf %%x : %#-1.42x\n", tab[i]);
		total += ft_printf("75 - faux printf %%x : %#-42.x\n", tab[i]);
		total += ft_printf("76 - faux printf %%x : %#-42.1x\n", tab[i]);
		total += ft_printf("77 - faux printf %%x : %#-42.8x\n", tab[i]);
		total += ft_printf("78 - faux printf %%x : %#-42.42x\n", tab[i]);
		//total += ft_printf("79 - faux printf %%x : %#08.2x\n", tab[i]);
		//total += ft_printf("80 - faux printf %%x : %#08.42x\n", tab[i]);
		//total += ft_printf("81 - faux printf %%x : %#042.x\n", tab[i]);
		printf("[%x] faux printf total printed : %i\n", tab[i], total);
		i++;
	}
}
