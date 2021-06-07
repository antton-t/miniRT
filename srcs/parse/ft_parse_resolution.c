#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_resolution_1(t_ion *reso, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			reso->ok = -1;
		str++;
	}
}
int	ft_parse_resolution(char *str)
{
	t_ion	*param_reso;

	param_reso = ft_init_reso();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'R')
	{
		str++;
		if (ft_check_reso(str) == 0)
			return (0);
		param_reso->r_x = ft_atoi_1(&str);
		str++;
		param_reso->r_y = ft_atoi_1(&str);
printf("%i =>r_x\n",param_reso->r_x);
printf("%i =>r_y\n",param_reso->r_y);
	}
	else
		return (0);
	ft_parse_resolution_1(param_reso, str);
	if (ft_check_reso_value(param_reso) == 0)
		return (0);
	return (1);
}
