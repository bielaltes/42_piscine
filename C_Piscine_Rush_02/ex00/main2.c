/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:21:31 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/24 10:57:32 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	inputerror(int argc, char **argv, unsigned int *n, int *aux)
{
	if (argc == 1 || argc > 3)
	{
		write(2, "Error\n", 6);
		*aux = 1;
		return ;
	}
	if (argc == 2)
		*n = atoi(argv[1]);
	if (argc == 3)
		*n = atoi(argv[2]);
	if (*n < 0 || *n > 4294967295)
	{
		write(2, "Error\n", 6);
		*aux = 1;
		return ;
	}
}

int main(int argc, char **argv)
{
	unsigned int	n;
	unsigned int	*pn;
	int				aux;
	int				*paux;
	struct _entry	*dict;

	n = 0;
	aux = 0;
	pn = &n;
	paux = &aux;
	inputerror(argc, argv, pn, paux);
	if (aux != 0)
		return (0);
	if (argc == 2)
		dict = read_dict("number.dict");
	else
		dict = read_dict(&argv[1][0]);
	execute(n, dict);
}
