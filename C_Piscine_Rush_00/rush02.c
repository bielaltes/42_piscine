/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2rush02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:51:56 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/09 17:47:31 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printfila(int x, char a, char b)
{
	int	aux;

	aux = x;
	ft_putchar(a);
	while (aux > 2)
	{
		ft_putchar(b);
		--aux;
	}
	if (x > 1)
	{
		ft_putchar(a);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	aux;

	aux = y;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	printfila(x, 'A', 'B');
	while (aux > 2)
	{
		printfila(x, 'B', ' ');
		--aux;
	}
	if (y > 1)
	{
		printfila(x, 'C', 'B');
	}
}
