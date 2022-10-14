/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputcorrect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:25:27 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 18:05:02 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	inputcorrect(char *file, int numrows, int numcols, char c)
{
	int	fd;
	int	sz;
	int	rows;
	int	cols;

	fd = open(file, O_RDONLY);
	while (c != '\n')
		sz = read(fd, &c, 1);
	rows = 0;
	cols = 0;
	while (sz > 0)
	{
		sz = read(fd, &c, 1);
		++cols;
		if (c == '\n')
		{
			if (cols - 1 != numcols && rows != numrows)
				return (0);
			cols = 0;
			rows++;
		}
	}
	if (numrows != rows - 1)
		return (1);
	return (1);
}
