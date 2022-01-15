/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:21:31 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/14 20:21:32 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the purpose of this function is to count the length of a number
 * then return it */

int	ft_count_digit(long int nb)
{
	int	digits;

	digits = 1;
	if (nb < 0)
	{
		digits++;
		nb = -nb;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		digits++;
	}
	return (digits);
}
