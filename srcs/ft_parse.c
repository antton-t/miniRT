/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:26:01 by antton-t          #+#    #+#             */
/*   Updated: 2021/02/10 09:31:56 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_miniRT.h"

int	ft_parse_resolution(char *str)
{
	t_ion	*param_reso;

	param_reso = ft_init_reso();
	if (ft_check_reso(str) == 0)
		return (0);
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'R')
	{
		str++;
		param_reso->r_x = ft_atoi_1(&str);
		str++;
		param_reso->r_y = ft_atoi(str);
printf("%i =>r_x\n",param_reso->r_x);
printf("%i =>r_y\n",param_reso->r_y);
	}
	else
		return (0);
	return (1);
}
int	ft_parse_ambient(char *str)
{
	t_ent	*param_ambient;

	param_ambient = ft_init_ambi();
	if (ft_check_ambient(str) == 0)
		return (0);
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'A')
	{
		str++;
		param_ambient->light_range = ft_atof_1(&str);
		str++;
		param_ambient->a_r = ft_atoi_1(&str);
		str++;
		param_ambient->a_g = ft_atoi_1(&str);
		str++;
		param_ambient->a_b = ft_atoi(str);

printf("%f =>light_range\n",param_ambient->light_range);
printf("%i =>a_r\n",param_ambient->a_r);
printf("%i =>a_g\n",param_ambient->a_g);
printf("%i =>a_ b\n",param_ambient->a_b);
	}
	else
		return (0);
	return (1);
}
int	ft_parse_camera(char *str)
{
	t_era	*param_cam;

	param_cam = ft_init_cam();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'c')
	{
		str++;
		param_cam->c_x = ft_atof_1(&str);
		str++;
		param_cam->c_y = ft_atof_1(&str);
		str++;
		param_cam->c_z = ft_atof_1(&str);
		str++;
		param_cam->c_3d_x = ft_atof_1(&str);
		str++;
		param_cam->c_3d_y = ft_atof_1(&str);
		str++;
		param_cam->c_3d_z = ft_atof_1(&str);
		str++;
		param_cam->c_fov = ft_atoi(str);

printf("%f =>c_x\n",param_cam->c_x);
printf("%f =>c_y\n",param_cam->c_y);
printf("%f =>c_z\n",param_cam->c_z);
printf("%f =>c_3d_x\n",param_cam->c_3d_x);
printf("%f =>c_3d_y\n",param_cam->c_3d_y);
printf("%f =>c_3d_z\n",param_cam->c_3d_z);
printf("%i =>fov\n",param_cam->c_fov);
	}
	else
		return (0);
	return (1);
}
int	ft_parse_light(char *str)
{
	t_ght	*param_light;

	param_light = ft_init_light();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'l')
	{
		str++;
		param_light->l_x = ft_atof_1(&str);
		str++;
		param_light->l_y = ft_atof_1(&str);
		str++;
		param_light->l_z = ft_atof_1(&str);
		str++;
		param_light->l_bright = ft_atof_1(&str);
		str++;
		param_light->l_r = ft_atoi_1(&str);
		str++;
		param_light->l_g = ft_atoi_1(&str);
		str++;
		param_light->l_b = ft_atoi_1(&str);
printf("%f =>l_x\n",param_light->l_x);
printf("%f =>l_y\n",param_light->l_y);
printf("%f =>l_z\n",param_light->l_z);
printf("%f =>l_bright\n",param_light->l_bright);
printf("%i =>l_r\n",param_light->l_r);
printf("%i =>l_g\n",param_light->l_g);
printf("%i =>l_b\n",param_light->l_b);
	}
	else
		return (0);
	return (1);
}
int	ft_parse(char **line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (ft_parse_resolution(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_ambient(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_camera(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_light(line[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}
