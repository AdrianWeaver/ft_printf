/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:20:27 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/20 13:12:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int			i;
	int			c;
	int			total;
	int			tab[6];

	i = 0;
	tab[0] = 'A';
	tab[1] = '0';
	tab[2] = 31;
	tab[3] = ' ';
	tab[4] = 0;
	tab[5] = 256;
	while (i <= 6)
	{
		c = tab[i];
		total = 0;
		total += printf("01 - vrai printf %%c : %c\n", c);
		total += printf("02 - vrai printf %%c : %1c\n", c);
		total += printf("03 - vrai printf %%c : %42c\n", c);
		total += printf("04 - vrai printf %%c : %-1c\n", c);
		total += printf("05 - vrai printf %%c : %-42c\n", c);
		printf("vrai printf total printed : %i\n", total);
		total = 0;
		total += ft_printf("01 - faux printf %%c : %c\n", c);
		total += ft_printf("02 - faux printf %%c : %1c\n", c);
		total += ft_printf("03 - faux printf %%c : %42c\n", c);
		total += ft_printf("04 - faux printf %%c : %-1c\n", c);
		total += ft_printf("05 - faux printf %%c : %-42c\n", c);
		printf("faux printf total printed : %i\n", total);
		i++;
	}
	return (0);
}
