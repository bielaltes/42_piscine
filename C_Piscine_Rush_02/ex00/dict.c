/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:39:34 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/23 20:01:45 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	read_nbr(char *ptr)
{
	return (atoi(ptr));
}

char *read_word(char *ptr)
{
	int len;
	char *word;
	int i;
	
	i = 0;
	len = ft_strlen(ptr)
	word = malloc(sizeof(char) * (len + 1));
	while(ptr[i] != '\n')
	{
		word[i] == ptr[i];
		++i;
	}
	word[i] = '\0';
	return (word);
}

d_entry *read_dict(char *file)
{
	char *ptr;
	d_entry *dict;
	int i;
	int len;

	lenlines = numlines(files);
	lenchar = numchar(files);
	dict = malloc(sizeof(d_entry) * lenlines);
	ptr = dict_cpy(file, len);
	while (*ptr != '\0')
	{
		dict[i].nb = read_nbr(ptr);
		while (*ptr <= 57)
			++ptr;
		dict[i].word = read_word(ptr);
		while (*ptr != '\n')
			++ptr;
		++ptr;	
	}
	return (dict);
}

void	find_dict(int nb, d_entry *dict)
{
	int i;

	i = 0;
	while (dict[i].nb != -1)
	{
		if (dict[i].nb == nb)
			return (dict[i].word);
		++i;
	}
	return (NULL);
}

