/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:12:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/04 23:16:40 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int		number;
	char	c;
	char	*addr;
	char	*str;
	int		total;
	int		test;

	number = -1;
	c = 'a';
	test = 0;
	total = 0;
	str = malloc(sizeof(*str) * (17 + 1));
	if (str == 0)
		return (0);
	addr = malloc(sizeof(*addr));
	if (str == 0)
		return (0);
	str = "je suis un string";
	total += printf("vrai printf %%c, %c\n", c);
	total += printf("vrai printf %%s, %s\n", str);
	test += printf("vrai printf %%i: %i\n", number);
	total += test;
	printf("Nombre de caracteres imprimes : %d\n", test);
	total += printf("vrai printf %%u: %u\n", number);
	total += printf("vrai printf %%p: %p\n", addr);
	printf("Nombre de caracteres imprimes : %d\n", total);
	total = 0;
	test = 0;
	total += ft_printf("faux printf %%c, %c\n", c);
	total += ft_printf("faux printf %%s, %s\n", str);
	test += ft_printf("faux printf %%i: %i\n", number);
	printf("Nombre de caracteres imprimes : %d\n", test);
	total += test;
	//ft_printf("faux printf %%u: %u\n", number);
	//ft_printf("faux printf %%p: %p\n", addr);
	//ft_printf("faux printf %%s, %s\n", str);
	printf("Nombre de caracteres imprimes : %d\n", total);
}
