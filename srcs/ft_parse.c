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
		if (ft_parse_sphere(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_plane(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_square(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_cylinder(line[i]) == 1)
			i++;
		else
			return (0);
		if (ft_parse_triangle(line[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}
