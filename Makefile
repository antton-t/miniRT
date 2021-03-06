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
HEAD = -I./includes -Ilibft
CFLAGS = -Wall -Wextra -Werror
FILES = main.c\

DIR_PARSE_and_FORM =	srcs/ft_parse.c \
			srcs/check/ft_check_reso.c \
			srcs/check/ft_check_light.c \
			srcs/check/ft_check_cam.c \
			srcs/check/ft_check_ambient.c \
			srcs/check/ft_check_sphere.c \
			srcs/check/ft_check_plane.c \
			srcs/check/ft_check_square.c \
			srcs/check/ft_check_cylinder.c \
			srcs/check/ft_check_triangle.c \
			srcs/check/ft_check_letter.c \
			srcs/check/ft_check_ambient_value.c \
			srcs/check/ft_check_reso_value.c \
			srcs/check/ft_check_cam_value.c \
			srcs/check/ft_check_sphere_value.c \
			srcs/check/ft_check_square_value.c \
			srcs/check/ft_check_cylinder_value.c \
			srcs/check/ft_check_triangle_value.c \
			srcs/check/ft_check_light_value.c \
			srcs/check/ft_check_plane_value.c \
			srcs/check/ft_check_deci.c \
			srcs/check/ft_check_entier.c \
			srcs/parse/ft_parse_ambient.c \
			srcs/parse/ft_parse_cylinder.c \
			srcs/parse/ft_parse_plane.c \
			srcs/parse/ft_parse_sphere.c \
			srcs/parse/ft_parse_triangle.c \
			srcs/parse/ft_parse_camera.c \
			srcs/parse/ft_parse_light.c \
			srcs/parse/ft_parse_resolution.c \
			srcs/parse/ft_parse_square.c \
			srcs/init/ft_init_reso.c \
			srcs/init/ft_init_ambi.c \
			srcs/init/ft_init_cam.c \
			srcs/init/ft_init_light.c \
			srcs/init/ft_init_cyl.c \
			srcs/init/ft_init_plane.c \
			srcs/init/ft_init_sphere.c \
			srcs/init/ft_init_tri.c \
			srcs/init/ft_init_square.c \
			srcs/form/ft_is_light.c \

DIR_ADD =  \

DIR_UTILS =  \



 
OBJ = $(FILES:.c=.o) \
			$(DIR_PARSE_and_FORM:.c=.o) \
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
