# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baltes-g <baltes-g@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 16:35:03 by baltes-g          #+#    #+#              #
#    Updated: 2022/07/27 18:30:51 by baltes-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILES = main.c print_output.c calc_max.c inputcorrect.c read_file.c lens_files.c ft_atoi.c

OBJECTS = main.o print_output.o calc_max.o inputcorrect.o read_file.o lens_files.o ft_atoi.o

INCLUDES = ft.h

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : 
	gcc -c $(FLAG) -I includes $(FILES)
	gcc -o $(NAME) $(OBJECTS)

fclean :
	rm -f $(NAME) $(OBJECTS)
