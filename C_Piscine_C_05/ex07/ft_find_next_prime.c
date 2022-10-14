/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:33:26 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/25 15:44:11 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (div * div <= nb && div <= 46341)
	{
		if (nb % div == 0)
			return (0);
		++div;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
}
/*
int main(void)
{
	printf("%d", ft_find_next_prime(2147483646));
}*/
