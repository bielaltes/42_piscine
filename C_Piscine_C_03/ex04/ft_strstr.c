/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:42:12 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/14 16:58:01 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	trobat(char *src, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*to_find == *src)
		{
			++src;
			++to_find;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	b;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		b = trobat(str, to_find);
		if (b == 0)
		{
			++str;
		}
		else
		{
			return (str);
		}
	}
	return (NULL);
}
/*int main(void)
{
	char a[] = "Hola";
	char b[] = "a";
	printf("%s" "%s", strstr(&a[0], &b[0]), ft_strstr(&a[0], &b[0]));
}*/
