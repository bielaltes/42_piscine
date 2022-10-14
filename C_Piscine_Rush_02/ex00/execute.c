/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:04:31 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/24 10:57:53 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int	tenpot(unsigned int pot)
{
	unsigned int	a;

	a = 1;
	while (pot > 0)
	{
		a = a * 10;
		pot--;
	}
	return (a);
}

void	getnbr(int nbr[4][3], unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	nbr[0][0] = 0;
	nbr[0][1] = 0;
	while (i < 4)
	{
		if (i == 0)
			j = 2;
		else
			j = 0;
		while (j < 3)
		{
			nbr[i][j] = (n / tenpot(11 - 3 * i - j)) % 10;
			j++;
		}
		i++;
	}
}

void	execute(unsigned int nbr,struct d_entry *dict)
{
	int nbr[4][3];
	getnbr(nbr, n);
	mat_print(nbr);
}
