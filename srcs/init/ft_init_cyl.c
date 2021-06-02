#include "libft.h"
#include "ft_miniRT.h"

t_der	*ft_init_cyl(void)
{
	t_der	*new;

	new = NULL;
	if (!(new = (t_der *)malloc(sizeof(t_der))))
		return (NULL);
	new->c_x = 0;
	new->c_y = 0;
	new->c_z = 0;
	new->c_3d_x = 0;
	new->c_3d_y = 0;
	new->c_3d_z = 0;
	new->c_d = 0;
	new->c_d = 0;
	new->c_h = 0;
	new->c_r = 0;
	new->c_g = 0;
	new->c_b = 0;
	return (new);
}
