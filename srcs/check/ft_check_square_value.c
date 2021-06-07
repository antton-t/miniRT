#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_square_value(t_are *squ)
{
	int	i;

	i = 0;
	if (squ->s_3d_x >= -1 && squ->s_3d_x <= 1)
		i++;
	if (squ->s_3d_y >= -1 && squ->s_3d_y <= 1)
		i++;
	if (squ->s_3d_z >= -1 && squ->s_3d_z <= 1)
		i++;
	if (squ->s_r >= 0 && squ->s_r <= 255)
		i++;
	if (squ->s_g >= 0 && squ->s_g <= 255)
		i++;
	if (squ->s_b >= 0 && squ->s_b <= 255)
		i++;
	if (i == 6)
		return (1);
	return (0);
}
