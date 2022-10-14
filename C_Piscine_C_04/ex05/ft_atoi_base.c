/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:27:40 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/18 16:01:38 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		++str;
		++len;
	}
	return (len);
}
int	is_repeated(int i, char a, char *base)
{
	int j;

	j = 0;
	while (base[j] != '\0')
	{
		if (a == base[j] && j != i)
			return (1);
		++j;
	}
	return (0);
}

int	is_base(char *base)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (i < len)
	{
		if (is_repeated(i, base[i], base))
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		++i;
	}
	return (1);
}

int	ft_atoi_base(char *str, char*base)
{
	if (!is_base(base))
		return ;
	
}


int	main(void)
{
	char *base = "abcd";
	ft_putnbr_base(abfc, base);
}
