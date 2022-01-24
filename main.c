/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:12:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 15:58:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char 		*str;
	int			total;

	str = "";
	total = 0;
	total += printf("%s", str);
	total += printf("vrai printf total printed : %i\n", total);
	total = 0;
	total += ft_printf("%s", str);
	printf("faux printf total printed : %i\n", total);
}
