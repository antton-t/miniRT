#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_ambient_2(t_ent *amb, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			amb->a_r = -1;
		str++;
	}
}
void	ft_parse_ambient_1(t_ent *amb, char *str)
{
	amb->light_range = ft_atof_1(&str);
	str++;
	amb->a_r = ft_atoi_1(&str);
	str++;
	amb->a_g = ft_atoi_1(&str);
	str++;
	amb->a_b = ft_atoi_1(&str);
	ft_parse_ambient_2(amb, str);
}
int	ft_parse_ambient(char *str)
{
	t_ent	*param_ambient;

	param_ambient = ft_init_ambi();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'A')
	{
		str++;
		if (ft_check_ambient(str) == 0)
			return (0);
		ft_parse_ambient_1(param_ambient, str);
printf("%f =>light_range\n",param_ambient->light_range);
printf("%i =>a_r\n",param_ambient->a_r);
printf("%i =>a_g\n",param_ambient->a_g);
printf("%i =>a_ b\n",param_ambient->a_b);
	}
	else
		return (0);
	if (ft_check_ambient_value(param_ambient) == 0)
		return (0);
	return (1);
}
