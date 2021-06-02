#include "libft.h"
#include "ft_miniRT.h"

t_era	*ft_init_cam(void)
{
	t_era	*new;

	new = NULL;
	if (!(new = (t_era *)malloc(sizeof(t_era))))
		return (NULL);
	new->c_x = 0;
	new->c_y = 0;
	new->c_z = 0;
	new->c_3d_x = 0;
	new->c_3d_y = 0;
	new->c_3d_z = 0;
	new->c_fov = 0;
	return (new);
}
