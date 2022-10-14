/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:58:11 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/07 17:10:12 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a <= 9)
	{
		a += 1;
		b = a + 1;
		c = b + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				print(a, b, c);
				++c;
			}
		++b;
		}
	}
}
