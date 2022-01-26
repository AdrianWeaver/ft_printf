/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_check_flags.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:11:29 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/26 18:15:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_printf_check_flags(t_list_printf *list)
{
	if (list->flag_zero == 1 && list->flag_hyphen == 1)
		list->flag_zero = 0;
	if (list->flag_zero == 1 && list->flag_precision == 1)
		list->flag_zero = 0;
	if (list->flag_space == 1 && list->flag_plus == 1)
		list->flag_space = 0;
}
