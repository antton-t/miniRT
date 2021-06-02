#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_plane_value(t_ane *pla)
{
	int	i;

	i = 0;
	if (pla->p_3d_x >= -1 && pla->p_3d_x <= 1)
		i++;
	if (pla->p_3d_y >= -1 && pla->p_3d_y <= 1)
		i++;
	if (pla->p_3d_z >= -1 && pla->p_3d_z <= 1)
		i++;
	if (pla->p_g >= 0 && pla->p_g <= 255)
		i++;
	if (pla->p_g >= 0 && pla->p_g <= 255)
		i++;
	if (pla->p_b >= 0 && pla->p_b <= 255)
		i++;
	if (i == 6)
		return (1);
	return (0);
}
