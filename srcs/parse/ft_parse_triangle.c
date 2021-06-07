#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_triangle_2(t_ang *tri, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			tri->t_r =  -1;
		str++;
	}
}
void	ft_parse_triangle_1(t_ang *tri, char *str)
{
	tri->t_1_x = ft_atof_1(&str);
	str++;
	tri->t_1_y = ft_atof_1(&str);
	str++;
	tri->t_1_z = ft_atof_1(&str);
	str++;
	tri->t_2_x = ft_atof_1(&str);
	str++;
	tri->t_2_y = ft_atof_1(&str);
	str++;
	tri->t_2_z = ft_atof_1(&str);
	str++;
	tri->t_3_x = ft_atof_1(&str);
	str++;
	tri->t_3_y = ft_atof_1(&str);
	str++;
	tri->t_3_z = ft_atof_1(&str);
	str++;
	tri->t_r = ft_atoi_1(&str);
	str++;
	tri->t_g = ft_atoi_1(&str);
	str++;
	tri->t_b = ft_atoi_1(&str);
	ft_parse_triangle_2(tri, str);
}

int	ft_parse_triangle(char *str)
{
	t_ang	*param_tri;
	param_tri = ft_init_triangle();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 't')
		str++;
	else
		return (0);
	if (*str == 'r')
		str++;
	else
		return (0);
	if (ft_check_triangle(str) == 0)
		return (0);
	ft_parse_triangle_1(param_tri, str);
printf("%f =>t_1_x\n",param_tri->t_1_x);
printf("%f =>t_1_y\n",param_tri->t_1_y);
printf("%f =>t_1_z\n",param_tri->t_1_z);
printf("%f =>t_2_x\n",param_tri->t_2_x);
printf("%f =>t_2_y\n",param_tri->t_2_y);
printf("%f =>t_2_z\n",param_tri->t_2_z);
printf("%f =>t_3_x\n",param_tri->t_3_x);
printf("%f =>t_3_y\n",param_tri->t_3_y);
printf("%f =>t_3_z\n",param_tri->t_3_z);
printf("%i =>t_r\n",param_tri->t_r);
printf("%i =>t_g\n",param_tri->t_g);
printf("%i =>t_b\n",param_tri->t_b);
	if (ft_check_triangle_value(param_tri) == 0)
		return (0);
	return (1);
}
