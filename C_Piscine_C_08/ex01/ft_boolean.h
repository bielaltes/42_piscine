/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bolean.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:22:03 by baltes-g          #+#    #+#             */
/*   Updated: 2022/07/28 15:06:41 by baltes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int		t_bool;
# define SUCCESS	1
# define TRUE		1
# define FALSE		0
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(x)	(x % 2 == 0)
#endif
