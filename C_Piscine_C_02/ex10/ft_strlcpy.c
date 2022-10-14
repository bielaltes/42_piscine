/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:13:56 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/14 13:48:21 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sum;

	i = 0;
	sum = 0;
	while (src[sum] != '\0')
	{
		++sum;
	}
	if (size < 1)
	{
		return (sum);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (sum);
}
