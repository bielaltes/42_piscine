/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:29:06 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/27 18:31:31 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	negative;
	int	nbr;

	negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		++str;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			++negative;
		++str;
	}
	nbr = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - 48);
		++str;
	}
	if (negative % 2 == 1)
		return (-nbr);
	return (nbr);
}

int	ft_nbrlen(int n)
{
	int	size;

	size = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		++size;
	}
	size++;
	return (size);
}
