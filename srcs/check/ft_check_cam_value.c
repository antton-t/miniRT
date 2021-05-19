#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_cam_value(t_era *cam)
{
	int	i;

	i = 0;
	if (cam->c_3d_x >= -1 && cam->c_3d_x <= 1)
		i++;
	if (cam->c_3d_y >= -1 && cam->c_3d_y <= 1)
		i++;
	if (cam->c_3d_z >= -1 && cam->c_3d_z <= 1)
		i++;
	if (cam->c_fov >= 0 && cam->c_fov <= 180)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
