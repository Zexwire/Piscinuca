# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvidal-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 18:11:39 by dvidal-l          #+#    #+#              #
#    Updated: 2023/08/27 18:11:40 by dvidal-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= main.c sort_utils.c dictionary_data_read.c dictionary_read.c \
	int_utils.c map_data.c print_numbers.c str_utils.c translator.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	-rm -f $(OBJ) 

fclean:	clean
	-rm -f $(NAME) 

re: fclean all

.PHONY:	all clean fclean re