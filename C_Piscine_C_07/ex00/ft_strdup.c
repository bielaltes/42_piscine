/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:30:13 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/28 12:27:02 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) *(ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char *src = "hola";
	printf("%s", ft_strdup(src)); 
}*/
