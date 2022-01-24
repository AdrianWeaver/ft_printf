/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:35:18 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/21 00:14:21 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int	main(void)
{
	unsigned int		tab[6];
	int					i;
	int					total;

	i = 0;
	tab[0] = 42;
	tab[1] = 2;
	tab[2] = 0;
	tab[3] = INT_MAX;
	tab[4] = UINT_MAX;
	while (i < 5)
	{
		total = 0;
		total += printf("01 - vrai printf %%u : %u\n", tab[i]);
		total += printf("02 - vrai printf %%u : %1u\n", tab[i]);
		total += printf("03 - vrai printf %%u : %42u\n", tab[i]);
		total += printf("04 - vrai printf %%u : %0u\n", tab[i]);
		total += printf("05 - vrai printf %%u : %01u\n", tab[i]);
		total += printf("06 - vrai printf %%u : %042u\n", tab[i]);
		total += printf("07 - vrai printf %%u : %-u\n", tab[i]);
		total += printf("08 - vrai printf %%u : %-1u\n", tab[i]);
		total += printf("09 - vrai printf %%u : %-42u\n", tab[i]);
		total += printf("10 - vrai printf %%u : %.u\n", tab[i]);
		total += printf("11 - vrai printf %%u : %.1u\n", tab[i]);
		total += printf("12 - vrai printf %%u : %.42u\n", tab[i]);
		//total += printf("12 - vrai printf %%u : %.*u\n", -2, tab[i]);
		total += printf("13 - vrai printf %%u : %1.u\n", tab[i]);
		total += printf("14 - vrai printf %%u : %1.1u\n", tab[i]);
		total += printf("15 - vrai printf %%u : %1.8u\n", tab[i]);
		total += printf("16 - vrai printf %%u : %1.42u\n", tab[i]);
		total += printf("17 - vrai printf %%u : %42.u\n", tab[i]);
		total += printf("18 - vrai printf %%u : %42.1u\n", tab[i]);
		total += printf("19 - vrai printf %%u : %42.8u\n", tab[i]);
		total += printf("20 - vrai printf %%u : %42.42u\n", tab[i]);
		total += printf("21 - vrai printf %%u : %-0u\n", tab[i]);
		total += printf("22 - vrai printf %%u : %-01u\n", tab[i]);
		total += printf("23 - vrai printf %%u : %-042u\n", tab[i]);
		total += printf("24 - vrai printf %%u : %-0.u\n", tab[i]);
		total += printf("25 - vrai printf %%u : %-0.1u\n", tab[i]);
		total += printf("26 - vrai printf %%u : %-0.42u\n", tab[i]);
		total += printf("27 - vrai printf %%u : %-.u\n", tab[i]);
		total += printf("28 - vrai printf %%u : %-.1u\n", tab[i]);
		total += printf("29 - vrai printf %%u : %-.8u\n", tab[i]);
		total += printf("30 - vrai printf %%u : %-.42u\n", tab[i]);
		total += printf("31 - vrai printf %%u : %-1.u\n", tab[i]);
		total += printf("32 - vrai printf %%u : %-1.1u\n", tab[i]);
		total += printf("33 - vrai printf %%u : %-1.8u\n", tab[i]);
		total += printf("34 - vrai printf %%u : %-1.42u\n", tab[i]);
		total += printf("35 - vrai printf %%u : %-42.u\n", tab[i]);
		total += printf("36 - vrai printf %%u : %-42.1u\n", tab[i]);
		total += printf("37 - vrai printf %%u : %-42.8u\n", tab[i]);
		total += printf("38 - vrai printf %%u : %-42.42u\n", tab[i]);
		total += printf("39 - vrai printf %%u : %0.u\n", tab[i]);
		printf("[%u] vrai printf total printed : %i\n", tab[i], total);
		total = 0;
		total += ft_printf("01 - faux printf %%u : %u\n", tab[i]);
		total += ft_printf("02 - faux printf %%u : %1u\n", tab[i]);
		total += ft_printf("03 - faux printf %%u : %42u\n", tab[i]);
		total += ft_printf("04 - faux printf %%u : %0u\n", tab[i]);
		total += ft_printf("05 - faux printf %%u : %01u\n", tab[i]);
		total += ft_printf("06 - faux printf %%u : %042u\n", tab[i]);
		total += ft_printf("07 - faux printf %%u : %-u\n", tab[i]);
		total += ft_printf("08 - faux printf %%u : %-1u\n", tab[i]);
		total += ft_printf("09 - faux printf %%u : %-42u\n", tab[i]);
		total += ft_printf("10 - faux printf %%u : %.u\n", tab[i]);
		total += ft_printf("11 - faux printf %%u : %.1u\n", tab[i]);
		total += ft_printf("12 - faux printf %%u : %.42u\n", tab[i]);
		//total += ft_printf("12 - faux printf %%u : %.*u\n", -2, tab[i]);
		total += ft_printf("13 - faux printf %%u : %1.u\n", tab[i]);
		total += ft_printf("14 - faux printf %%u : %1.1u\n", tab[i]);
		total += ft_printf("15 - faux printf %%u : %1.8u\n", tab[i]);
		total += ft_printf("16 - faux printf %%u : %1.42u\n", tab[i]);
		total += ft_printf("17 - faux printf %%u : %42.u\n", tab[i]);
		total += ft_printf("18 - faux printf %%u : %42.1u\n", tab[i]);
		total += ft_printf("19 - faux printf %%u : %42.8u\n", tab[i]);
		total += ft_printf("20 - faux printf %%u : %42.42u\n", tab[i]);
		total += ft_printf("21 - faux printf %%u : %-0u\n", tab[i]);
		total += ft_printf("22 - faux printf %%u : %-01u\n", tab[i]);
		total += ft_printf("23 - faux printf %%u : %-042u\n", tab[i]);
		total += ft_printf("24 - faux printf %%u : %-0.u\n", tab[i]);
		total += ft_printf("25 - faux printf %%u : %-0.1u\n", tab[i]);
		total += ft_printf("26 - faux printf %%u : %-0.42u\n", tab[i]);
		total += ft_printf("27 - faux printf %%u : %-.u\n", tab[i]);
		total += ft_printf("28 - faux printf %%u : %-.1u\n", tab[i]);
		total += ft_printf("29 - faux printf %%u : %-.8u\n", tab[i]);
		total += ft_printf("30 - faux printf %%u : %-.42u\n", tab[i]);
		total += ft_printf("31 - faux printf %%u : %-1.u\n", tab[i]);
		total += ft_printf("32 - faux printf %%u : %-1.1u\n", tab[i]);
		total += ft_printf("33 - faux printf %%u : %-1.8u\n", tab[i]);
		total += ft_printf("34 - faux printf %%u : %-1.42u\n", tab[i]);
		total += ft_printf("35 - faux printf %%u : %-42.u\n", tab[i]);
		total += ft_printf("36 - faux printf %%u : %-42.1u\n", tab[i]);
		total += ft_printf("37 - faux printf %%u : %-42.8u\n", tab[i]);
		total += ft_printf("38 - faux printf %%u : %-42.42u\n", tab[i]);
		total += ft_printf("39 - faux printf %%u : %0.u\n", tab[i]);
		printf("[%u] faux printf total printed : %i\n", tab[i], total);
		i++;
	}
}
