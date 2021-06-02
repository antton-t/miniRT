#include "libft.h"
#include "ft_miniRT.h"

int	ft_parse_square(char *str)
{
	t_are	*param_square;

	param_square = ft_init_square();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 's')
		str++;
	else
		return (0);
	if (*str == 'q')
		str++;
	else
		return  (0);
	//	if (ft_check_square(str) == 0)
	//		return (0);
	param_square->s_x = ft_atof_1(&str);
	str++;
	param_square->s_y = ft_atof_1(&str);
	str++;
	param_square->s_x = ft_atof_1(&str);
	str++;
	param_square->s_3d_x = ft_atof_1(&str);
	str++;
	param_square->s_3d_y = ft_atof_1(&str);
	str++;
	param_square->s_3d_z = ft_atof_1(&str);
	str++;
	param_square->s_r = ft_atoi_1(&str);
	str++;
	param_square->s_g = ft_atoi_1(&str);
	str++;
	param_square->s_b = ft_atoi_1(&str);
printf("%f =>s_x\n",param_square->s_x);
printf("%f =>s_y\n",param_square->s_y);
printf("%f =>s_z\n",param_square->s_z);
printf("%f =>s_3d_x\n",param_square->s_3d_x);
printf("%f =>s_3d_y\n",param_square->s_3d_y);
printf("%f =>s_3d_z\n",param_square->s_3d_z);
printf("%i =>s_r\n",param_square->s_r);
printf("%i =>square_g\n",param_square->s_g);
printf("%i =>s_ b\n",param_square->s_b);
	if (ft_check_square_value(param_square) == 0)
		return (0);
	return (1);
}
