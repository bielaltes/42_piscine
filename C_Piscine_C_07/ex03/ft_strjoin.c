/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:27:52 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/28 13:18:59 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

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

int	len_strs(int size, char**strs)
{
	int	i;
	int	sum;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum += ft_strlen(&strs[i][0]);
		++i;
	}
	return (sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	char	*aux;

	j = 0;
	i = 0;
	if (size == 0)
	{
		new = malloc(sizeof(char));
		*new = 0;
		return (new);
	}
	new = malloc(sizeof(char) * (50 + len_strs(size, strs)));
	while (i < size)
	{
		aux = ft_strcpy(&new[j], &strs[i][0]);
		j += ft_strlen(&strs[i][0]);
		new[j] = *sep;
		++j;
		++i;
	}
	new[j - 1] = '\0';
	return (new);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, "P"));
}*/
