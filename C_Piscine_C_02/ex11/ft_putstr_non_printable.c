/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:44:19 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/14 13:43:55 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	print_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			print_hexa(*str);
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}
/*int main(void)
{
	char a[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(&a[0]);
}*/
