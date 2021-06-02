#include "libft.h"
#include "ft_miniRT.h"

int	ft_parse_resolution(char *str)
{
	t_ion	*param_reso;

	param_reso = ft_init_reso();
	if (ft_check_reso(str) == 0)
		return (0);
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'R')
	{
		str++;
		param_reso->r_x = ft_atoi_1(&str);
		str++;
		param_reso->r_y = ft_atoi(str);
printf("%i =>r_x\n",param_reso->r_x);
printf("%i =>r_y\n",param_reso->r_y);
	}
	else
		return (0);
	return (1);
}
