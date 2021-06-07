#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_square_2(t_are *squ, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			squ->s_r = -1;
		str++;
	}
}
void	ft_parse_square_1(t_are *squ, char *str)
{
	squ->s_x = ft_atof_1(&str);
	str++;
	squ->s_y = ft_atof_1(&str);
	str++;
	squ->s_z = ft_atof_1(&str);
	str++;
	squ->s_3d_x = ft_atof_1(&str);
	str++;
	squ->s_3d_y = ft_atof_1(&str);
	str++;
	squ->s_3d_z = ft_atof_1(&str);
	str++;
	squ->s_ss = ft_atof_1(&str);
	str++;
	squ->s_r = ft_atoi_1(&str);
	str++;
	squ->s_g = ft_atoi_1(&str);
	str++;
	squ->s_b = ft_atoi_1(&str);
	ft_parse_square_2(squ, str);
}
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
	if (ft_check_square(str) == 0)
		return (0);
	ft_parse_square_1(param_square, str);
printf("%f =>s_x\n",param_square->s_x);
printf("%f =>s_y\n",param_square->s_y);
printf("%f =>s_z\n",param_square->s_z);
printf("%f =>s_3d_x\n",param_square->s_3d_x);
printf("%f =>s_3d_y\n",param_square->s_3d_y);
printf("%f =>s_3d_z\n",param_square->s_3d_z);
printf("%f =>s_ss\n",param_square->s_ss);
printf("%i =>s_r\n",param_square->s_r);
printf("%i =>square_g\n",param_square->s_g);
printf("%i =>s_ b\n",param_square->s_b);
	if (ft_check_square_value(param_square) == 0)
		return (0);
	return (1);
}
