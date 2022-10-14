/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:29:03 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/13 13:42:26 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)
{
	int a = 3;
	int b = 2;

	int *ptr = &a;
	int *ptr2 = &b;

	ft_ultimate_div_mod(ptr, ptr2);
	printf("%d" "%d", a, b);
}
