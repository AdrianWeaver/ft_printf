/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:29:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/25 15:31:37 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_digit(long int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
	{
		digits++;
		n = -n;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned long int	nbr;
	int					digits;
	char				*ret;

	nbr = (unsigned long int)n;
	digits = ft_count_digit(n);
	ret = malloc(sizeof(*ret) * (digits + 1));
	if (!ret)
		return (0);
	ret[digits] = 0;
	while (nbr > 0)
	{
		ret[digits - 1] = (nbr % 10) + '0';
		digits--;
		nbr /= 10;
	}
	if (n == 0)
		ret[0] = '0';
	return (ret);
}
