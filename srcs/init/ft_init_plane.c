#include "libft.h"
#include "ft_miniRT.h"

t_ane	*ft_init_plane(void)
{
	t_ane	*new;

	new = NULL;
	if (!(new = (t_ane *)malloc(sizeof(t_ane))))
		return (NULL);
	new->p_x = 0;
	new->p_y = 0;
	new->p_z = 0;
	new->p_3d_x = 0;
	new->p_3d_y = 0;
	new->p_3d_z = 0;
	new->p_r = 0;
	new->p_g = 0;
	new->p_b = 0;
	return (new);
}
