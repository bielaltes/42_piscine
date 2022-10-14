/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:58:11 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/07 18:01:34 by baltes-g         ###   ########.fr       */
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
		nb *= -1;
		ft_putchar('-');
	}
	ft_putnbr_i(nb);
}
