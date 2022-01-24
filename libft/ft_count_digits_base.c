/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:58:31 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 21:59:12 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_count_digits_base(size_t nb, size_t base_len)
{
	int	digits;

	digits = 1;
	if (!nb)
		return (0);
	if (base_len < 1)
		return (-1);
	while (nb / base_len > 0)
	{
		nb = nb / base_len;
		digits++;
	}
	return (digits);
}
