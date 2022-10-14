/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:57:59 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/25 15:36:25 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb && sqrt <= 46341)
	{
		++sqrt;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_sqrt(2));
}*/
