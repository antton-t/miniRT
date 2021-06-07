#include "libft.h"
#include "ft_miniRT.h"

void	ft_parse_plane_2(t_ane *pla, char *str)
{
	while (*str)
	{
		if (*str != ' ')
			pla->p_r = -1;
		str++;
	}
}
void	ft_parse_plane_1(t_ane *pla, char *str)
{
	pla->p_x = ft_atof_1(&str);
	str++;
	pla->p_y = ft_atof_1(&str);
	str++;
	pla->p_x = ft_atof_1(&str);
	str++;
	pla->p_3d_x = ft_atof_1(&str);
	str++;
	pla->p_3d_y = ft_atof_1(&str);
	str++;
	pla->p_3d_z = ft_atof_1(&str);
	str++;
	pla->p_r = ft_atoi_1(&str);
	str++;
	pla->p_g = ft_atoi_1(&str);
	str++;
	pla->p_b = ft_atoi_1(&str);
	ft_parse_plane_2(pla, str);
}
int	ft_parse_plane(char *str)
{
	t_ane	*param_plane;

	param_plane = ft_init_plane();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'p')
		str++;
	else
		return (0);
	if (*str == 'l')
		str++;
	else
		return  (0);
	if (ft_check_plane(str) == 0)
		return (0);
	ft_parse_plane_1(param_plane, str);
printf("%f =>p_x\n",param_plane->p_x);
printf("%f =>p_y\n",param_plane->p_y);
printf("%f =>p_z\n",param_plane->p_z);
printf("%f =>p_3d_x\n",param_plane->p_3d_x);
printf("%f =>p_3d_y\n",param_plane->p_3d_y);
printf("%f =>p_3d_z\n",param_plane->p_3d_z);
printf("%i =>p_r\n",param_plane->p_r);
printf("%i =>p_g\n",param_plane->p_g);
printf("%i =>p_ b\n",param_plane->p_b);
	if (ft_check_plane_value(param_plane) == 0)
		return (0);
	return (1);
}
