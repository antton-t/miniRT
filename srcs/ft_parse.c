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
	char	*ptr;
	t_ion	*param_reso;
	int	i;

	param_reso = ft_init_reso();
	ptr = str;
	while (*ptr == ' ' || *ptr == '\t')
		ptr++;
	if (*ptr == 'R')
	{
		ptr++;
		param_reso->r_x = ft_atoi(ptr);
		i = ft_intlength(param_reso->r_x);
		while (i >= 0)
		{
			ptr++;
			i--;
		}
		param_reso->r_y = ft_atoi(ptr);
	}
	else
		return (0);
	return (1);
}
int	ft_parse_ambient(char *str)
{
	char	*ptr;
	t_ent	*param_ambient;

	param_ambient = ft_init_ambi();
	ptr = str;
	while (*ptr == ' ' || *ptr == '\t')
		ptr++;
	if (*ptr == 'A')
	{
		ptr++;
		param_ambient->light_range = ft_atof_1(&ptr);
		ptr++;
		param_ambient->a_r = ft_atoi_count(ptr, &(param_ambient->ambi_length));
		while ((param_ambient->ambi_length) >= 0)
		{
			ptr++;
			param_ambient->ambi_length --;
		}
		param_ambient->a_g = ft_atoi_count(ptr, &(param_ambient->ambi_length));
		while ((param_ambient->ambi_length) >= 0)
		{
			ptr++;
			param_ambient->ambi_length --;
		}
		param_ambient->a_b = ft_atoi_count(ptr, &(param_ambient->ambi_length));
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
