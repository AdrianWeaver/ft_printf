/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:02:21 by aweaver           #+#    #+#             */
/*   Updated: 2021/12/19 10:30:45 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int	ret;

	return (ret);
}

int	main(void)
{
	int		number;
	char	c;
	char	*addr;
	char	*str;
	int		total;

	number = 2147483647;
	c = 'a';
	total = 0;
	str = malloc(sizeof(*str) * (12 + 1));
	if (str == 0)
		return (0);
	addr = malloc(sizeof(*addr));
	if (str == 0)
		return (0);
	printf("vrai printf %%c, %c\n", c);
	printf("vrai printf %%s, %s\n", str);
	printf("vrai printf %%u: %u\n", number);
	printf("vrai printf %%p
	return (total);
}
