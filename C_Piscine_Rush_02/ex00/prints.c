/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoguera <mnoguera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:11:33 by mnoguera          #+#    #+#             */
/*   Updated: 2022/07/24 10:21:58 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	position(int i)
{
	if (i == 0)
		write(1, "billion", 7);
	if (i == 1)
		write(1, "million", 7);
	if (i == 2)
		write(1, "thousand", 8);
}

void	mat_print(nbr[4][3])
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < 4)
	{
		j = 0;
		aux = 0;
		while (j < 3)
		{
			aux += nbr[i][j];
			j++;
		}
		if (aux != 0)
		{
			print_three(nbr[i]);
			position(i);
		}
		i++;
	}
}
