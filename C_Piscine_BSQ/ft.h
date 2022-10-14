/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:46:50 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 18:25:51 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_square
{
	int	size;
	int	i;
	int	j;
}	t_square;

void		print_map(t_square max_square, int **map, int *params);
char		**read_file(char *file, char params[5]);
t_square	find_square(char **mat, char params[5]);
void		print_output(t_square max, char **mat, char *params);
int			lenchar(char *file);
int			numcols(char *file);
int			numlines(char *file);
int			inputcorrect(char *file, int numrows, int numcols, char c);
int			ft_atoi(char *str);
int			ft_nbrlen(int n);

#endif
