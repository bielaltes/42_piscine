/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:15:58 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/13 13:40:05 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 3;
	int b = 2;

	int *ptr = &a;
	int *ptr2 = &b;

	ptr = &a;
	ft_div_mod(a, b, ptr, ptr2);
	printf("%d" "%d", *ptr, *ptr2);
}
