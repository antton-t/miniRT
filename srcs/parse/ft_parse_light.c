#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_light_2(t_ght *lig, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			lig->l_r =  -1;
		str++;
	}
}
void	ft_parse_light_1(t_ght *lig, char *str)
{
	lig->l_x = ft_atof_1(&str);
	str++;
	lig->l_y = ft_atof_1(&str);
	str++;
	lig->l_z = ft_atof_1(&str);
	str++;
	lig->l_bright = ft_atof_1(&str);
	str++;
	lig->l_r = ft_atoi_1(&str);
	str++;
	lig->l_g = ft_atoi_1(&str);
	str++;
	lig->l_b = ft_atoi_1(&str);
	ft_parse_light_2(lig, str);
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
		if (ft_check_light(str) == 0)
			return (0);
		ft_parse_light_1(param_light, str);
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
	if (ft_check_light_value(param_light) == 0)
		return (0);
	return (1);
}
