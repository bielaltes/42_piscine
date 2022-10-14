/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoguera <mnoguera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:25:16 by mnoguera          #+#    #+#             */
/*   Updated: 2022/07/23 19:56:44 by mnoguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numchar(char *file)
{
	int		fd;
	int		sz;
	int		cont;
	char	*c;

	c = malloc(sizeof(char));
	fd = open(file, O_RDONLY);
	sz = read(fd, c, 1);
	cont = 0;
	while (sz != 0)
	{
		cont++;
		sz = read(fd, c, 1);
	}
	close(fd);
	return (cont);
}

int	numlines(char *file)
{
	int		fd;
	int		sz;
	int		cont;
	char	*c;

	c = malloc(sizeof(char));
	fd = open(file, O_RDONLY);
	sz = read(fd, c, 1);
	cont = 0;
	while (sz != 0)
	{
		if (*c == '\n')
			count++;
		sz = read(fd, c, 1);
	}
	close(fd);
	return (cont);
}
