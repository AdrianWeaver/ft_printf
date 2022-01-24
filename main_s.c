/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:35:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/20 23:19:12 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int			i;
	char		*tab[4];
	char		str[] = "je suis un string";
	char		str2[] = "";
	int			total;

	i = 0;
	tab[0] = str;
	tab[1] = str2;
	while (i < 2)
	{
		total = 0;
		total += printf("01 - vrai printf %%s : %s\n", tab[i]);
		total += printf("02 - vrai printf %%s : %2s\n", tab[i]);
		total += printf("03 - vrai printf %%s : %42s\n", tab[i]);
		total += printf("04 - vrai printf %%s : %-s\n", tab[i]);
		total += printf("05 - vrai printf %%s : %-10s\n", tab[i]);
		total += printf("06 - vrai printf %%s : %.s\n", tab[i]);
		total += printf("07 - vrai printf %%s : %.0s\n", tab[i]);
		total += printf("08 - vrai printf %%s : %.10s\n", tab[i]);
		total += printf("09 - vrai printf %%s : %.42s\n", tab[i]);
		printf("10 - vrai printf %%s : %.*s\n", -2, tab[i]);
		total += printf("11 - vrai printf %%s : %42.42s\n", tab[i]);
		total += printf("12 - vrai printf %%s : %2.42s\n", tab[i]);
		total += printf("13 - vrai printf %%s : %42.2s\n", tab[i]);
		printf("14 - vrai printf %%s : %42.*s\n", -2, tab[i]);
		total += printf("15 - vrai printf %%s : %-42.2s\n", tab[i]);
		total += printf("16 - vrai printf %%s : %-.s\n", tab[i]);
		total += printf("17 - vrai printf %%s : %-1.s\n", tab[i]);
		total += printf("18 - vrai printf %%s : %-42.s\n", tab[i]);
		printf("18 - vrai printf %%s : %-42.*s\n", -2, tab[i]);
		total += printf("19 - vrai printf %%s : %-.2s\n", tab[i]);
		total += printf("20 - vrai printf %%s : %-.42s\n", tab[i]);
		printf("21 - vrai printf %%s : %-.*s\n", -2, tab[i]);
		total += printf("vrai printf total printed : %i\n", total);
		total = 0;
		total += ft_printf("01 - faux printf %%s : %s\n", tab[i]);
		total += ft_printf("02 - faux printf %%s : %2s\n", tab[i]);
		total += ft_printf("03 - faux printf %%s : %42s\n", tab[i]);
		total += ft_printf("04 - faux printf %%s : %-s\n", tab[i]);
		total += ft_printf("05 - faux printf %%s : %-10s\n", tab[i]);
		total += ft_printf("06 - faux printf %%s : %.s\n", tab[i]);
		total += ft_printf("07 - faux printf %%s : %.0s\n", tab[i]);
		total += ft_printf("08 - faux printf %%s : %.10s\n", tab[i]);
		total += ft_printf("09 - faux printf %%s : %.42s\n", tab[i]);
		//total += ft_printf("10 - faux printf %%s : %.*s\n", -2, tab[i]);
		total += ft_printf("11 - faux printf %%s : %42.42s\n", tab[i]);
		total += ft_printf("12 - faux printf %%s : %2.42s\n", tab[i]);
		total += ft_printf("13 - faux printf %%s : %42.2s\n", tab[i]);
		//total += ft_printf("14 - faux printf %%s : %42.*s\n", -2, tab[i]);
		total += ft_printf("15 - faux printf %%s : %-42.2s\n", tab[i]);
		total += ft_printf("16 - faux printf %%s : %-.s\n", tab[i]);
		total += ft_printf("17 - faux printf %%s : %-1.s\n", tab[i]);
		total += ft_printf("18 - faux printf %%s : %-42.s\n", tab[i]);
		//total += ft_printf("18 - faux printf %%s : %-42.*s\n", -2, tab[i]);
		total += ft_printf("19 - faux printf %%s : %-.2s\n", tab[i]);
		total += ft_printf("20 - faux printf %%s : %-.42s\n", tab[i]);
		//total += ft_printf("21 - faux printf %%s : %-.*s\n", -2, tab[i]);
		printf("faux printf total printed : %i\n", total);
		i++;
	}
}
