/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_miniRT.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:46:51 by antton-t          #+#    #+#             */
/*   Updated: 2021/02/10 09:38:47 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include "struct.h"

void    ft_is_light(char **line);
int    ft_parse(char **line);
t_ion	*ft_init_reso(void);
t_ent	*ft_init_ambi(void);
t_ght	*ft_init_light(void);
t_are	*ft_init_square(void);
t_era	*ft_init_cam(void);
t_ane	*ft_init_plane(void);
t_der	*ft_init_cyl(void);
t_ere	*ft_init_sphere(void);
t_ang	*ft_init_triangle(void);
int	ft_check_deci(char **str);
int	ft_check_ambient_value(t_ent *amb);
int	ft_check_square_value(t_are *squ);
int	ft_check_cam_value(t_era *cam);
int	ft_check_light_value(t_ght *lig);
int	ft_check_reso_value(t_ion *reso);
int	ft_check_plane_value(t_ane *pla);
int	ft_check_sphere_value(t_ere *sph);
int	ft_check_triangle_value(t_ang *tri);
int	ft_check_cylinder_value(t_der *cyl);
int	ft_check_entier(char **str);
int	ft_check_letter(char *str);
int	ft_check_ambient(char *str);
int	ft_check_triangle(char *str);
int	ft_check_sphere(char *str);
int	ft_check_cylinder(char *str);
int	ft_check_square(char *str);
int	ft_check_plane(char *str);
int	ft_check_reso(char *str);
int	ft_check_cam(char *str);
int	ft_check_light(char *str);
int	ft_parse_ambient(char *str);
int	ft_parse_cylinder(char *str);
int	ft_parse_plane(char *str);
int	ft_parse_sphere(char *str);
int	ft_parse_triangle(char *str);
int	ft_parse_camera(char *str);
int	ft_parse_light(char *str);
int	ft_parse_resolution(char *str);
int	ft_parse_square(char *str);

#endif
