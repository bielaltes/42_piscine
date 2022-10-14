/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:16:04 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 17:07:59 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	lenchar(char *file)
{
	int		fd;
	int		sz;
	int		cont;
	char	c;

	c = 'a';
	fd = open(file, O_RDONLY);
	if (fd < 1)
		exit(1);
	sz = read(fd, &c, 1);
	cont = 0;
	while (sz > 0)
	{
		cont++;
		sz = read(fd, &c, 1);
	}
	close(fd);
	return (cont);
}

int	numcols(char *file)
{
	int		fd;
	int		sz;
	int		cont;
	char	c;

	c = 'a';
	fd = open(file, O_RDONLY);
	if (fd < 1)
		exit(1);
	sz = read(fd, &c, 1);
	cont = 0;
	while (c != '\n')
		sz = read(fd, &c, 1);
	sz = read(fd, &c, 1);
	while (c != '\n')
	{
		cont++;
		sz = read(fd, &c, 1);
	}
	close(fd);
	return (cont);
}

int	numlines(char *file)
{
	int		fd;
	int		sz;
	int		cont;
	char	c;

	c = 'a';
	fd = open(file, O_RDONLY);
	sz = read(fd, &c, 1);
	cont = 0;
	while (sz > 0)
	{
		if (c == '\n')
			cont++;
		sz = read(fd, &c, 1);
	}
	close(fd);
	return (cont - 1);
}
