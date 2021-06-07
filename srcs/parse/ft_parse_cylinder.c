#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_cylinder_2(t_der *cyl, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			cyl->c_r = -1;
		str++;
	}
}
void	ft_parse_cylinder_1(t_der *cyl, char *str)
{
printf("%s =>str\n",str);
	cyl->c_x = ft_atof_1(&str);
	str++;
	cyl->c_y = ft_atof_1(&str);
	str++;
	cyl->c_z = ft_atof_1(&str);
	str++;
	cyl->c_3d_x = ft_atof_1(&str);
	str++;
	cyl->c_3d_y = ft_atof_1(&str);
	str++;
	cyl->c_3d_z = ft_atof_1(&str);
	str++;
	cyl->c_d = ft_atof_1(&str);
	str++;
	cyl->c_h = ft_atof_1(&str);
	str++;
	cyl->c_r = ft_atoi_1(&str);
	str++;
	cyl->c_g = ft_atoi_1(&str);
	str++;
	cyl->c_b = ft_atoi_1(&str);
	ft_parse_cylinder_2(cyl, str);
}
int	ft_parse_cylinder(char *str)
{
	t_der	*param_cyl;

	param_cyl = ft_init_cyl();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'c')
		str++;
	else
		return (0);
	if (*str == 'y')
		str++;
	else
		return  (0);
	if (ft_check_cylinder(str) == 0)
		return (0);
	ft_parse_cylinder_1(param_cyl, str);
printf("%f =>c_x\n",param_cyl->c_x);
printf("%f =>c_y\n",param_cyl->c_y);
printf("%f =>c_z\n",param_cyl->c_z);
printf("%f =>c_3d_x\n",param_cyl->c_3d_x);
printf("%f =>c_3d_y\n",param_cyl->c_3d_y);
printf("%f =>c_3d_z\n",param_cyl->c_3d_z);
printf("%f =>c_d\n",param_cyl->c_d);
printf("%f =>c_h\n",param_cyl->c_h);
printf("%i =>c_r\n",param_cyl->c_r);
printf("%i =>c_g\n",param_cyl->c_g);
printf("%i =>c_ b\n",param_cyl->c_b);
	if (ft_check_cylinder_value(param_cyl) == 0)
		return (0);
	return (1);
}
