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
		param_ambient->light_range = ft_atof(ptr, &(param_ambient->ambi_length));
		while (param_ambient->ambi_length >= 0)
		{
			ptr++;
			param_ambient->ambi_length --;
		}
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
printf("%s =>ptr\n",str);
		param_cam->c_x = ft_atof_1(&str);
	//	param_cam->c_x = ft_atof_1(&ptr, &(param_cam->cam_length));
	//	param_cam->c_x = ft_atof_1(&ptr, &(param_cam->cam_length));
	}
	else
		return (0);
	return (1);
}
int	ft_parse_light(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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
