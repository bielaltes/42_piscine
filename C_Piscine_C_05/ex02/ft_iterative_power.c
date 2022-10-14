/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:19 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/21 17:37:25 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		sum *= nb;
		--power;
	}
	return (sum);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(2, -2));
}*/
