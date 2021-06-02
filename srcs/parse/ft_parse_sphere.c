#include "libft.h"
#include "ft_miniRT.h"

int	ft_parse_sphere(char *str)
{
	t_ere	*param_sphere;
	
	param_sphere  = ft_init_sphere();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 's')
		str++;
	else
		return (0);
	if (*str  == 'p')
		str++;
	else
		return (0);
	//	if (ft_check_sphere(str) == 0)
	//		return (0);
	param_sphere->s_x = ft_atof_1(&str);
	str++;
	param_sphere->s_y = ft_atof_1(&str);
	str++;
	param_sphere->s_z = ft_atof_1(&str);
	str++;
	param_sphere->s_dia = ft_atof_1(&str);
	str++;
	param_sphere->s_r = ft_atoi_1(&str);
	str++;
	param_sphere->s_g = ft_atoi_1(&str);
	str++;
	param_sphere->s_b = ft_atoi_1(&str);
printf("%f =>s_x\n",param_sphere->s_x);
printf("%f =>s_y\n",param_sphere->s_y);
printf("%f =>s_z\n",param_sphere->s_z);
printf("%f =>s_dia\n",param_sphere->s_dia);
printf("%i =>s_r\n",param_sphere->s_r);
printf("%i =>s_g\n",param_sphere->s_g);
printf("%i =>s_ b\n",param_sphere->s_b);
	if (ft_check_sphere_value(param_sphere) == 0)
		return (0);
	return (1);
}
