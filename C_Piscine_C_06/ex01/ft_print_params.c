/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:14:16 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/19 17:18:48 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(&argv[1 + i][0]);
		++i;
	}
}
