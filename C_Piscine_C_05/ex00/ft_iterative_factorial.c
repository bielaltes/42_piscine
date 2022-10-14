/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:33:22 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/19 10:55:33 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			--nb;
			sum *= nb;
		}
		return (sum);
	}
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(13));
}*/
