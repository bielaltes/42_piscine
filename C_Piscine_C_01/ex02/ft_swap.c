/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:43:38 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/13 13:37:48 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 3;
	int b = 2;
	int *ptr;
	int *ptr2;

	ptr = &a;
	ptr2 = &b;
	ft_swap(ptr, ptr2);
	printf("%d" "%d", a, b);
}
