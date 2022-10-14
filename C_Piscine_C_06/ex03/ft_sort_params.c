/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:14:16 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/20 17:23:22 by baltes-g         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		++s1;
		++s2;
		return (ft_strcmp(s1, s2));
	}
	else
	{
		return (*s1 - *s2);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		acabar;

	acabar = 0;
	while (!acabar)
	{
		i = 1;
		acabar = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
				acabar = 0;
			}
			++i;
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
