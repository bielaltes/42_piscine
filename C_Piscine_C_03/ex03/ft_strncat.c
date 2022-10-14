/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:32:22 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/14 16:41:38 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*aux;

	aux = dest;
	while (*dest != '\0')
	{
		++dest;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		++src;
		++dest;
		--nb;
	}
	*dest = '\0';
	return (aux);
}
/*int main(void)
{
	char str1[] = "hola";
	char str2[] = "adeu";
	printf("%s", ft_strncat(str1, str2, 3));
}*/
