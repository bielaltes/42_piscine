/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:27:46 by smarco            #+#    #+#             */
/*   Updated: 2022/07/23 19:56:45 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*dict_copy(char *file, int nb_line)
{
	int fd;
	int sz;
	int i;
	char *c;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0) 
	{
		printf("error");
	}
	c = malloc(sizeof(char))
	char *dict = malloc(sizeof(char) * (1 + nb_line));
	while (nb_line > i)
	{
		sz = read(fd, c, 1);
		dict[i] = *c;
		++i;
	}
	dict[i] = '\0';
	return (dict);
}
