/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:12:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/05 11:53:58 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int			number;
	char		c;
	char		*addr;
	char		*str;
	uint64_t	u_number;

	number = -20;
	u_number = 2147483647;
	c = 'a';
	str = malloc(0);
	str = malloc(sizeof(*str) * (17 + 1));
	if (str == 0)
		return (0);
	addr = malloc(sizeof(*addr));
	if (addr == 0)
		return (0);
	str = "je suis un string";
	printf("vrai printf %%c, %c\n", c);
	ft_printf("faux printf %%c, %c\n", c);
	printf("vrai printf %%s, %s\n", str);
	ft_printf("faux printf %%s, %s\n", str);
	printf("vrai printf %%i: %i\n", number);
	ft_printf("faux printf %%i: %i\n", number);
	printf("vrai printf %%u: %lu\n", u_number);
	ft_printf("faux printf %%u: %u\n", u_number);
	printf("vrai printf %%p: %p\n", NULL);
	ft_printf("faux printf %%p: %p\n", NULL);
}
