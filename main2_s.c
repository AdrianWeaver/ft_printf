/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:35:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/27 16:35:10 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int			i;
	char		*str;
	int			total;

	str = NULL;
	i = 0;
	while (i < 1)
	{
		total = 0;
		total += printf("01 - vrai printf %%s      : %s\n", str);
		total += printf("02 - vrai printf %%2s     : %2s\n", str);
		total += printf("03 - vrai printf %%32s    : %32s\n", str);
		total += printf("04 - vrai printf %%-32s   : %-32s\n", str);
		total += printf("05 - vrai printf %%-16s   : %-16s\n", str);
		total += printf("06 - vrai printf %%-3s    : %-3s\n", str);
		total += printf("07 - vrai printf %%.9s    : %.9s\n", str);
		total += printf("08 - vrai printf %%.3s    : %.3s\n", str);
		total += printf("09 - vrai printf %%.s     : %.s\n", str);
		total += printf("10 - vrai printf %%.0s    : %.0s\n", str);
		total += printf("11 - vrai printf %%.03s   : %.03s\n", str);
		total += printf("12 - vrai printf %%.09s   : %.09s\n", str);
		total += printf("13 - vrai printf %%3.1s   : %3.s\n", str);
		total += printf("14 - vrai printf %%10.s   : %10.s\n", str);
		total += printf("15 - vrai printf %%-3.s   : %-3.s\n", str);
		total += printf("16 - vrai printf %%-8.ss  : %-8.s\n", str);
		total += printf("17 - vrai printf %%3.1s   : %3.1s\n", str);
		total += printf("18 - vrai printf %%9.1s   : %9.1s\n", str);
		total += printf("19 - vrai printf %%-3.1s  : %-3.1s\n", str);
		total += printf("20 - vrai printf %%-9.1s  : %-9.1s\n", str);
		total += printf("21 - vrai printf %%3.6s   : %3.6s\n", str);
		total += printf("22 - vrai printf %%20.6s  : %20.6s\n", str);
		total += printf("23 - vrai printf %%-3.8s  : %-3.8s\n", str);
		total += printf("24 - vrai printf %%-10.8s : %-10.8s\n", str);
		total += printf("vrai printf total printed : %i\n", total);
		total = 0;
		total += ft_printf("01 - faux printf %%s      : %s\n", str);
		total += ft_printf("02 - faux printf %%2s     : %2s\n", str);
		total += ft_printf("03 - faux printf %%32s    : %32s\n", str);
		total += ft_printf("04 - faux printf %%-32s   : %-32s\n", str);
		total += ft_printf("05 - faux printf %%-16s   : %-16s\n", str);
		total += ft_printf("06 - faux printf %%-3s    : %-3s\n", str);
		total += ft_printf("07 - faux printf %%.9s    : %.9s\n", str);
		total += ft_printf("08 - faux printf %%.3s    : %.3s\n", str);
		total += ft_printf("09 - faux printf %%.s     : %.s\n", str);
		total += ft_printf("10 - faux printf %%.0s    : %.0s\n", str);
		total += ft_printf("11 - faux printf %%.03s   : %.03s\n", str);
		total += ft_printf("12 - faux printf %%.09s   : %.09s\n", str);
		total += ft_printf("13 - faux printf %%3.1s   : %3.s\n", str);
		total += ft_printf("14 - faux printf %%10.s   : %10.s\n", str);
		total += ft_printf("15 - faux printf %%-3.s   : %-3.s\n", str);
		total += ft_printf("16 - faux printf %%-8.ss  : %-8.s\n", str);
		total += ft_printf("17 - faux printf %%3.1s   : %3.1s\n", str);
		total += ft_printf("18 - faux printf %%9.1s   : %9.1s\n", str);
		total += ft_printf("19 - faux printf %%-3.1s  : %-3.1s\n", str);
		total += ft_printf("20 - faux printf %%-9.1s  : %-9.1s\n", str);
		total += ft_printf("21 - faux printf %%3.6s   : %3.6s\n", str);
		total += ft_printf("22 - faux printf %%20.6s  : %20.6s\n", str);
		total += ft_printf("23 - faux printf %%-3.8s  : %-3.8s\n", str);
		total += ft_printf("24 - faux printf %%-10.8s : %-10.8s\n", str);
		printf("faux printf total printed : %i\n", total);
		i++;
	}
}
