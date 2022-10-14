/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:20:45 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/13 15:52:04 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;
	int	swap;

	i = 0;
	rev = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[rev];
		tab[rev] = swap;
		++i;
		--rev;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4};
	ft_rev_int_tab(tab, 4);
	printf("%d", tab[3]);
}
