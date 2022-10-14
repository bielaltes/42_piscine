/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:02:27 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/22 12:37:10 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	valid2(int pos, int str[10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < pos)
	{
		if (pos - str[pos] == j - str[j] && pos != j)
			return (0);
		if (pos + str[pos] == j + str[j] && pos != j)
			return (0);
		++j;
	}
	return (1);
}

int	valid(int pos, int str[10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < pos)
	{
		if (str[pos] == str[j])
			return (0);
		++j;
	}
	return (valid2(pos, str));
}

int	sumar(int pos, int *puzzle)
{
	int last;

	last = pos;
	puzzle[pos]++;
	while (pos >= 0)
	{
		if (puzzle[pos] == 9)
		{
			if (pos == 0)
			{
				++puzzle[pos];
				return(pos);
			}
			puzzle[pos] = 0;
			puzzle[pos-1]++;
			last = pos;
		}
		--pos;
	}
	return (last);
}

void	printsol(int str[10])
{
	char aux;
	int i;

	i = 0;
	while (i < 10)
	{
		aux = str[i] + 48;
		write(1, &aux, 1);
		++i;
	}
	write(1, "\n", 1);
}

void	backtracking(int *sum, int pos, int puzzle[10])
{
	//int aux = pos + 48;
	//write(1, &aux, 1);
	if (pos > 9 || pos < 0)
		write(1, "pene", 4);
	if (puzzle[0] == 10)
		return ;
	if (pos == 9 && valid(9, puzzle))
	{
		*sum = *sum +1;
		printsol(puzzle);
		backtracking(sum, sumar(9, puzzle), puzzle);
	}
	else if (valid(pos, puzzle))
	{
		++puzzle[pos + 1];
		backtracking(sum, pos + 1, puzzle);
	}	
	else
	{
		backtracking(sum, sumar(pos, puzzle), puzzle);
	}
}
		

int	ft_ten_queens_puzzle(void)
{
	int	puzzle[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int sum;
	int *ptr;

	sum = 0;
	ptr = &sum;
	backtracking(ptr, 0, puzzle);
	return (sum);
}

int main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
