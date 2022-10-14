/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:39:25 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/28 11:51:07 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	*aux;

	if (min >= max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min));
	aux = new;
	while (min < max)
	{
		*new = min;
		++new;
		++min;
	}
	return (aux);
}
/*
int	main(void)
{
	int *i;
	int a;

	a = 0;
	i = ft_range(2, 10);
	while (a < 8)
	{
		printf("%d", i[a]);
		++a;
	}
}*/
