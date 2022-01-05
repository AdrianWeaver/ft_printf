/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:12:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 15:47:40 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int			number;
	char		c;
	char		*addr;
	char		*str;
	uint64_t	u_number;
	int			total;

	number = -20;
	u_number = 2147483647;
	c = 0;
	str = malloc(0);
	total = 0;
	str = malloc(sizeof(*str) * (17 + 1));
	if (str == 0)
		return (0);
	addr = malloc(sizeof(*addr));
	if (addr == 0)
		return (0);
	str = "je suis un string";
	printf("vrai printf %%c, %c %c %c \n", '0', 0, '1');
	ft_printf("vrai printf %%c, %c %c %c \n", '0', 0, '1');
	printf("NULL vrai printf %%s, %s\n", str);
	printf("faux printf %%s, %s\n", str);
	printf("vrai printf %%i: %i\n", number);
	ft_printf("faux printf %%i: %i\n", number);
	printf("vrai printf %%u: %u\n", 4294967296);
	ft_printf("faux printf %%u: %u\n", 4294967296);
	total += ft_printf("vrai printf %%p: %p\nvrai printf %%p: %p\n", ULONG_MAX, -ULONG_MAX);
	printf ("total : %d\n", total);
	total = 0;
	total += ft_printf("faux printf %%p: %p\nvrai printf %%p: %p\n",  ULONG_MAX, -ULONG_MAX);
	printf ("total : %d\n", total);
	printf("vrai printf %%x, %x\n", -101);
	ft_printf("faux printf %%x: %x\n", -101);
}
