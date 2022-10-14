/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:58:11 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/18 18:24:02 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_i(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr_i(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb *= -1;
		ft_putchar('-');
	}
	ft_putnbr_i(nb);
}
/*
int main(void)
{
	ft_putnbr(-2147483648);
}*/
