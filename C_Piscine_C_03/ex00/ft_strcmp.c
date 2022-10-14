/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:55:37 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/15 15:47:19 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

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
int main(void)
{
	char *str1 = "holb", *str2 = "hola";
	printf("%d" "%d", ft_strcmp(str1, str2), strcmp(str1, str2));
}	
