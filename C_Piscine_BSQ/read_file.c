/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:16:04 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 18:25:30 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*readrow(char *file, int i, int cols, char c)
{
	int		fd;
	int		sz;
	char	*row;
	int		j;

	j = 0;
	fd = open(file, O_RDONLY);
	while (i >= j)
	{
		sz = read(fd, &c, 1);
		if (c == '\n')
			++j;
	}
	j = 0;
	row = malloc(sizeof(char) * (cols + 1));
	read(fd, &c, 1);
	while (c != '\n')
	{
		row[j] = c;
		read(fd, &c, 1);
		++j;
	}
	close(fd);
	row[j] = '\0';
	return (row);
}

char	*get_params(char *file, char params[5])
{
	char	*a;
	int		i;

	a = readrow(file, -1, 50, 'c');
	i = ft_atoi(a);
	params[1] = i;
	params[2] = a[ft_nbrlen(i)];
	params[3] = a[ft_nbrlen(i) + 1];
	params[4] = a[ft_nbrlen(i) + 2];
	free(a);
	return (params);
}

char	**readmat(char *file, int rows, int cols)
{
	char	**mat;
	int		i;

	i = 0;
	mat = malloc(sizeof(char *) * (1 + rows));
	if (!mat)
		exit(1);
	while (i < rows)
	{
		mat[i] = readrow(file, i, cols, 'c');
		++i;
	}
	mat[i] = NULL;
	return (mat);
}

char	**read_file(char *file, char params[5])
{
	int		nbchars;

	params[0] = numcols(file);
	params = get_params(file, params);
	if (!inputcorrect(file, (int)params[1], numcols(file), 'c'))
	{
		write(1, "map error\n", 11);
		exit(1);
	}
	else
	{
		nbchars = lenchar(file);
		return (readmat(file, (int)params[1], (int)params[0]));
	}
}
