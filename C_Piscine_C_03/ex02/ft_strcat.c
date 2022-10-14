/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:08:41 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/14 15:17:11 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*dest != '\0')
	{
		++dest;
	}
	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (aux);
}
/*int main(void)
{
	char str1[] = "hola";
	char str2[] = "adeu";
	printf("%s", ft_strcat(str1, str2));
}*/
