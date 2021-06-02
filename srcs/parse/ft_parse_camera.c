#include "libft.h"
#include "ft_miniRT.h"

int	ft_parse_camera(char *str)
{
	t_era	*param_cam;

	param_cam = ft_init_cam();
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == 'c')
	{
		str++;
		if (ft_check_cam(str) == 0)
			return (0);
		param_cam->c_x = ft_atof_1(&str);
		str++;
		param_cam->c_y = ft_atof_1(&str);
		str++;
		param_cam->c_z = ft_atof_1(&str);
		str++;
		param_cam->c_3d_x = ft_atof_1(&str);
		str++;
		param_cam->c_3d_y = ft_atof_1(&str);
		str++;
		param_cam->c_3d_z = ft_atof_1(&str);
		str++;
		param_cam->c_fov = ft_atoi(str);

printf("%f =>c_x\n",param_cam->c_x);
printf("%f =>c_y\n",param_cam->c_y);
printf("%f =>c_z\n",param_cam->c_z);
printf("%f =>c_3d_x\n",param_cam->c_3d_x);
printf("%f =>c_3d_y\n",param_cam->c_3d_y);
printf("%f =>c_3d_z\n",param_cam->c_3d_z);
printf("%i =>fov\n",param_cam->c_fov);
	}
	else
		return (0);
	if (ft_check_cam_value(param_cam) == 0)
		return (0);
	return (1);
}
