/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:17:00 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/17 15:37:25 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int		input_correct(char **argv);
void	printboard(int board[4][4]);
int		backtracking(int i, int j, int limiters[16], int board[4][4]);
int		*get_input(char **argv);

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	*limiters;
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			++j;
		}
		++i;
	}
	board[0][0]++;
	if (argc == 2 && input_correct(argv))
	{
		limiters = get_input(argv);
		backtracking(0, 0, limiters, board);
	}
	else
		write(1, "error: bad input\n", 17);
}
