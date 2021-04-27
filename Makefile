# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antton-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 16:41:00 by antton-t          #+#    #+#              #
#    Updated: 2021/02/10 10:14:31 by antton-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = miniRT
CC = gcc
HEAD = -Iincludes -Ilibft
CFLAGS = -Wall -Wextra -Werror
FILES = main.c \

DIR_PARSE_and_FORM =	srcs/ft_parse.c \
			srcs/form/ft_is_light.c \

DIR_ADD =  \

DIR_UTILS =  \



 
OBJ = $(FILES:.c=.o) \
			$(DIR_PARSE_and_IS:.c=.o) \
			$(DIR_ADD:.c=.o) \
			$(DIR_UTILS:.c=.o) \

all :   $(NAME) 

$(NAME) : libft/libft.a $(OBJ) ./includes/ft_miniRT.h
		$(CC) $(CFLAGS) $(HEAD) $(OBJ) libft/libft.a -o ${NAME}
		rm -rf *.o ./obj
		rm -rf */*.o ./obj
		rm -rf */*/*.o ./obj
		
libft/libft.a : 
	make -C libft

.c.o: 
		$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean
re: fclean all