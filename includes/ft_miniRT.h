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
t_era	*ft_init_cam(void);
int	ft_check_deci(char **str);
int	ft_check_deci_1(char **str);
int	ft_check_entier(char **str);
int	ft_check_ambient(char *str);
int	ft_check_reso(char *str);
int	ft_check_cam(char *str);
int	ft_check_light(char *str);
#endif
