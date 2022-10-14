/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloran-t <lloran-t@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:29:47 by lloran-t          #+#    #+#             */
/*   Updated: 2022/07/27 17:04:50 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	square_init(t_square max)
{
	max.size = 0;
	max.i = 0;
	max.j = 0;
}

int	check_max(char **mat, char p[5], int i, int j)
{
	int	aux;
	int	size;
	int	k;

	size = 1;
	aux = 1;
	while (1)
	{
		k = 0;
		if (i + aux > p[0] || j + aux > p[1])
			return (size);
		else if (mat[i + aux][j + aux] == p[3])
			return (size);
		else
		{
			while (k < aux)
			{
				if (mat[i + aux][j + k] == p[3] || mat[i + k][j + aux] == p[3])
					return (size);
				++k;
			}
		}
		++aux;
		size = (aux) * (aux);
	}
}

t_square	create_square(int i, int j, int size)
{
	t_square	max;

	max.i = i;
	max.j = j;
	max.size = size;
	return (max);
}

t_square	find_square(char **mat, char *params)
{
	t_square	max;
	int			i;
	int			j;
	int			size;

	size = 0;
	i = 0;
	j = 0;
	max.size = 0;
	square_init(max);
	while (i < (int)params[1])
	{
		while (mat[i][j])
		{
			if (mat[i][j] == params[2])
			{
				size = check_max(mat, params, i, j);
				if (size > max.size)
					max = create_square(i, j, size);
			}
			j++;
		}
		i++;
	}
	return (max);
}
