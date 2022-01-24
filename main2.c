/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:12:32 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 17:17:31 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	va_list			params;
	t_list_printf	toto;
	char			str[] = "%010.5i";

	toto.i = 0;
	toto.ret = 0;
	ft_printf_parse(str, &toto);
	printf("str: %s\nflag_zero: %d\nflag_hyphen: %d\nflag_space: %d\nflag_plus: %d\nflag_hashtag: %d\nwidth: %d\nflag_precision:%d\nprecision_width: %d\n", str, toto.flag_zero, toto.flag_hyphen, toto.flag_space, toto.flag_plus, toto.flag_hashtag, toto.width, toto.flag_precision, toto.precision_width);
	return (0);
}
