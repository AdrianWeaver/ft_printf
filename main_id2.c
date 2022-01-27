/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_id2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:35:18 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/27 10:00:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int	main(void)
{
	int		tab[7];
	int		i;
	int		total;

	i = 6;
	tab[0] = 42;
	tab[1] = -42;
	tab[2] = 2;
	tab[3] = -2;
	tab[4] = 0;
	tab[5] = INT_MAX;
	tab[6] = INT_MIN;
	while (i < 7)
	{
		total = 0;
		total += printf("01 - vrai printf %%i : % i\n", tab[i]);
		total += printf("02 - vrai printf %%i : % 1i\n", tab[i]);
		total += printf("03 - vrai printf %%i : % 42i\n", tab[i]);
		total += printf("04 - vrai printf %%i : % 0i\n", tab[i]);
		total += printf("05 - vrai printf %%i : % 01i\n", tab[i]);
		total += printf("06 - vrai printf %%i : % 042i\n", tab[i]);
		total += printf("07 - vrai printf %%i : % -i\n", tab[i]);
		total += printf("08 - vrai printf %%i : % -1i\n", tab[i]);
		total += printf("09 - vrai printf %%i : % -42i\n", tab[i]);
		total += printf("10 - vrai printf %%i : % .i\n", tab[i]);
		total += printf("11 - vrai printf %%i : % .1i\n", tab[i]);
		total += printf("12 - vrai printf %%i : % .42i\n", tab[i]);
		total += printf("13 - vrai printf %%i : % 1.i\n", tab[i]);
		total += printf("14 - vrai printf %%i : % 1.1i\n", tab[i]);
		total += printf("15 - vrai printf %%i : % 1.8i\n", tab[i]);
		total += printf("16 - vrai printf %%i : % 1.42i\n", tab[i]);
		total += printf("17 - vrai printf %%i : % 42.i\n", tab[i]);
		total += printf("18 - vrai printf %%i : % 42.1i\n", tab[i]);
		total += printf("19 - vrai printf %%i : % 42.8i\n", tab[i]);
		total += printf("20 - vrai printf %%i : % 42.42i\n", tab[i]);
		total += printf("21 - vrai printf %%i : % -0i\n", tab[i]);
		total += printf("22 - vrai printf %%i : % -01i\n", tab[i]);
		total += printf("23 - vrai printf %%i : % -042i\n", tab[i]);
		total += printf("24 - vrai printf %%i : % -0.i\n", tab[i]);
		total += printf("25 - vrai printf %%i : % -0.1i\n", tab[i]);
		total += printf("26 - vrai printf %%i : % -0.42i\n", tab[i]);
		total += printf("27 - vrai printf %%i : % -.i\n", tab[i]);
		total += printf("28 - vrai printf %%i : % -.1i\n", tab[i]);
		total += printf("29 - vrai printf %%i : % -.8i\n", tab[i]);
		total += printf("30 - vrai printf %%i : % -.42i\n", tab[i]);
		total += printf("31 - vrai printf %%i : % -1.i\n", tab[i]);
		total += printf("32 - vrai printf %%i : % -1.1i\n", tab[i]);
		total += printf("33 - vrai printf %%i : % -1.8i\n", tab[i]);
		total += printf("34 - vrai printf %%i : % -1.42i\n", tab[i]);
		total += printf("35 - vrai printf %%i : % -42.i\n", tab[i]);
		total += printf("36 - vrai printf %%i : % -42.1i\n", tab[i]);
		total += printf("37 - vrai printf %%i : % -42.8i\n", tab[i]);
		total += printf("38 - vrai printf %%i : % -42.42i\n", tab[i]);
		total += printf("39 - vrai printf %%i : % 0.i\n", tab[i]);
		total += printf("40 - vrai printf %%i : % 0.1i\n", tab[i]);
		total += printf("41 - vrai printf %%i : % 0.8i\n", tab[i]);
		total += printf("42 - vrai printf %%i : % 0.42i\n", tab[i]);
		total += printf("43 - vrai printf %%i : % 01.i\n", tab[i]);
		total += printf("44 - vrai printf %%i : % 01.1i\n", tab[i]);
		total += printf("45 - vrai printf %%i : % 01.8i\n", tab[i]);
		total += printf("46 - vrai printf %%i : % 01.42i\n", tab[i]);
		total += printf("47 - vrai printf %%i : % 08.i\n", tab[i]);
		total += printf("48 - vrai printf %%i : % 08.1i\n", tab[i]);
		total += printf("49 - vrai printf %%i : % 08.8i\n", tab[i]);
		total += printf("50 - vrai printf %%i : % 08.42i\n", tab[i]);
		total += printf("51 - vrai printf %%i : % 042.i\n", tab[i]);
		total += printf("52 - vrai printf %%i : % 042.1i\n", tab[i]);
		total += printf("53 - vrai printf %%i : % 042.8i\n", tab[i]);
		total += printf("54 - vrai printf %%i : % 042.42i\n", tab[i]);
		printf("[%i] vrai printf total printed : %i\n", tab[i], total);
		total = 0;
		total += ft_printf("01 - faux printf %%i : % i\n", tab[i]);
		total += ft_printf("02 - faux printf %%i : % 1i\n", tab[i]);
		total += ft_printf("03 - faux printf %%i : % 42i\n", tab[i]);
		total += ft_printf("04 - faux printf %%i : % 0i\n", tab[i]);
		total += ft_printf("05 - faux printf %%i : % 01i\n", tab[i]);
		total += ft_printf("06 - faux printf %%i : % 042i\n", tab[i]);
		total += ft_printf("07 - faux printf %%i : % -i\n", tab[i]);
		total += ft_printf("08 - faux printf %%i : % -1i\n", tab[i]);
		total += ft_printf("09 - faux printf %%i : % -42i\n", tab[i]);
		total += ft_printf("10 - faux printf %%i : % .i\n", tab[i]);
		total += ft_printf("11 - faux printf %%i : % .1i\n", tab[i]);
		total += ft_printf("12 - faux printf %%i : % .42i\n", tab[i]);
		total += ft_printf("13 - faux printf %%i : % 1.i\n", tab[i]);
		total += ft_printf("14 - faux printf %%i : % 1.1i\n", tab[i]);
		total += ft_printf("15 - faux printf %%i : % 1.8i\n", tab[i]);
		total += ft_printf("16 - faux printf %%i : % 1.42i\n", tab[i]);
		total += ft_printf("17 - faux printf %%i : % 42.i\n", tab[i]);
		total += ft_printf("18 - faux printf %%i : % 42.1i\n", tab[i]);
		total += ft_printf("19 - faux printf %%i : % 42.8i\n", tab[i]);
		total += ft_printf("20 - faux printf %%i : % 42.42i\n", tab[i]);
		total += ft_printf("21 - faux printf %%i : % -0i\n", tab[i]);
		total += ft_printf("22 - faux printf %%i : % -01i\n", tab[i]);
		total += ft_printf("23 - faux printf %%i : % -042i\n", tab[i]);
		total += ft_printf("24 - faux printf %%i : % -0.i\n", tab[i]);
		total += ft_printf("25 - faux printf %%i : % -0.1i\n", tab[i]);
		total += ft_printf("26 - faux printf %%i : % -0.42i\n", tab[i]);
		total += ft_printf("27 - faux printf %%i : % -.i\n", tab[i]);
		total += ft_printf("28 - faux printf %%i : % -.1i\n", tab[i]);
		total += ft_printf("29 - faux printf %%i : % -.8i\n", tab[i]);
		total += ft_printf("30 - faux printf %%i : % -.42i\n", tab[i]);
		total += ft_printf("31 - faux printf %%i : % -1.i\n", tab[i]);
		total += ft_printf("32 - faux printf %%i : % -1.1i\n", tab[i]);
		total += ft_printf("33 - faux printf %%i : % -1.8i\n", tab[i]);
		total += ft_printf("34 - faux printf %%i : % -1.42i\n", tab[i]);
		total += ft_printf("35 - faux printf %%i : % -42.i\n", tab[i]);
		total += ft_printf("36 - faux printf %%i : % -42.1i\n", tab[i]);
		total += ft_printf("37 - faux printf %%i : % -42.8i\n", tab[i]);
		total += ft_printf("38 - faux printf %%i : % -42.42i\n", tab[i]);
		total += ft_printf("39 - faux printf %%i : % 0.i\n", tab[i]);
		total += ft_printf("40 - faux printf %%i : % 0.1i\n", tab[i]);
		total += ft_printf("41 - faux printf %%i : % 0.8i\n", tab[i]);
		total += ft_printf("42 - faux printf %%i : % 0.42i\n", tab[i]);
		total += ft_printf("43 - faux printf %%i : % 01.i\n", tab[i]);
		total += ft_printf("44 - faux printf %%i : % 01.1i\n", tab[i]);
		total += ft_printf("45 - faux printf %%i : % 01.8i\n", tab[i]);
		total += ft_printf("46 - faux printf %%i : % 01.42i\n", tab[i]);
		total += ft_printf("47 - faux printf %%i : % 08.i\n", tab[i]);
		total += ft_printf("48 - faux printf %%i : % 08.1i\n", tab[i]);
		total += ft_printf("49 - faux printf %%i : % 08.8i\n", tab[i]);
		total += ft_printf("50 - faux printf %%i : % 08.42i\n", tab[i]);
		total += ft_printf("51 - faux printf %%i : % 042.i\n", tab[i]);
		total += ft_printf("52 - faux printf %%i : % 042.1i\n", tab[i]);
		total += ft_printf("53 - faux printf %%i : % 042.8i\n", tab[i]);
		total += ft_printf("54 - faux printf %%i : % 042.42i\n", tab[i]);
		printf("[%i] faux printf total printed : %i\n", tab[i], total);
		i++;
	}
}
