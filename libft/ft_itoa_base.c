/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:47 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/19 10:12:46 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa_base(int n, int base_len, char *base_format)
{
	long int	nbr;
	int			digits;
	char		*ret;

	nbr = (long)n;
	digits = ft_count_digits_base(n, base_len);
	ret = malloc(sizeof(*ret) * (digits + 1));
	if (!ret || digits == -1)
		return (0);
	ret[digits] = 0;
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr = -nbr;
	}
	if ((nbr > 9 && nbr <= base_len) || n == 0)
		ret[0] = '0';
	while (nbr > 0)
	{
		ret[digits - 1] = base_format[(nbr % base_len)];
		digits--;
		nbr /= base_len;
	}
	return (ret);
}
