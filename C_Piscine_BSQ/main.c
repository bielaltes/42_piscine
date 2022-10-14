/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:17:44 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 18:33:18 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char		**mat;
	char		params[5];
	t_square	max_square;
	int			i;

	i = 0;
	while (argc > 1)
	{
		mat = read_file(argv[i + 1], params);
		max_square = find_square(mat, params);
		print_output(max_square, mat, params);
		--i;
		argc -= 1;
	}
	i = 0;
	while (i < params[1])
	{
		free(&mat[i][0]);
		++i;
	}
	free(mat);
}
