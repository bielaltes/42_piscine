/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:41:40 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/28 15:56:55 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*new;
	int	*aux;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	new = malloc(sizeof(int) * (max - min));
	aux = new;
	if (!new)
		return (-1);
	while (min < max)
	{
		new[i] = min;
		++i;
		++min;
	}
	*range = aux;
	return (i);
}
