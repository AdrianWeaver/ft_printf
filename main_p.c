/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:12:53 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/20 16:09:38 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	char		**tab[3];
	char		*str;
	int			i;
	int			total;

	i = 0;
	str = malloc(sizeof(*str) * (17 + 1));
	if (str == 0)
		return (0);
	tab[0] = &str;
	tab[1] = NULL;
	while (i < 2)
	{
		total = 0;
		total += printf("01 - vrai printf %%p : %p\n", tab[i]);
		total += printf("02 - vrai printf %%p : %1p\n", tab[i]);
		total += printf("03 - vrai printf %%p : %8p\n", tab[i]);
		total += printf("04 - vrai printf %%p : %9p\n", tab[i]);
		total += printf("05 - vrai printf %%p : %10p\n", tab[i]);
		total += printf("06 - vrai printf %%p : %-p\n", tab[i]);
		total += printf("07 - vrai printf %%p : %-1p\n", tab[i]);
		total += printf("08 - vrai printf %%p : %-8p\n", tab[i]);
		total += printf("09 - vrai printf %%p : %-9p\n", tab[i]);
		total += printf("10 - vrai printf %%p : %-10p\n", tab[i]);
		total += printf("11 - vrai printf %%p : %-42p\n", tab[i]);
		total += printf("vrai printf total printed : %i\n", total);
		total = 0;
		total += ft_printf("01 - faux printf %%p : %p\n", tab[i]);
		total += ft_printf("02 - faux printf %%p : %1p\n", tab[i]);
		total += ft_printf("03 - faux printf %%p : %8p\n", tab[i]);
		total += ft_printf("04 - faux printf %%p : %9p\n", tab[i]);
		total += ft_printf("05 - faux printf %%p : %10p\n", tab[i]);
		total += ft_printf("06 - faux printf %%p : %-p\n", tab[i]);
		total += ft_printf("07 - faux printf %%p : %-1p\n", tab[i]);
		total += ft_printf("08 - faux printf %%p : %-8p\n", tab[i]);
		total += ft_printf("09 - faux printf %%p : %-9p\n", tab[i]);
		total += ft_printf("10 - faux printf %%p : %-10p\n", tab[i]);
		total += ft_printf("11 - faux printf %%p : %-42p\n", tab[i]);
		printf("faux printf total printed : %i\n", total);
		i++;
	}
	free(str);
}
