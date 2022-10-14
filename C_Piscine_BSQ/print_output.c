/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:54:43 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 15:21:15 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	print_output(t_square max, char **mat, char *params)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (int)params[1])
	{
		j = 0;
		while (j < (int)params[0])
		{
			if (i >= max.i && i < ft_sqrt(max.size) + max.i)
			{
				if (j >= max.j && j < ft_sqrt(max.size) + max.j)
					write(1, &params[4], 1);
				else
					write(1, &mat[i][j], 1);
			}
			else
				write(1, &mat[i][j], 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
}
