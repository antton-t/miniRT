#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_cylinder_value(t_der *cyl)
{
	int	i;

	i = 0;
	if (cyl->c_3d_x >= -1 && cyl->c_3d_x <= 1)
		i++;
	if (cyl->c_3d_y >= -1 && cyl->c_3d_y <= 1)
		i++;
	if (cyl->c_3d_z >= -1 && cyl->c_3d_z <= 1)
		i++;
	if (cyl->c_g >= 0 && cyl->c_g <= 255)
		i++;
	if (cyl->c_g >= 0 && cyl->c_g <= 255)
		i++;
	if (cyl->c_b >= 0 && cyl->c_b <= 255)
		i++;
	if (i == 6)
		return (1);
	return (0);
}
