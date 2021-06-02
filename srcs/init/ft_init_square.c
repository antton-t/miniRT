#include "libft.h"
#include "ft_miniRT.h"

t_are	*ft_init_square(void)
{
	t_are	*new;

	new = NULL;
	if (!(new = (t_are *)malloc(sizeof(t_are))))
		return (NULL);
	new->s_x = 0;
	new->s_y = 0;
	new->s_z = 0;
	new->s_3d_x = 0;
	new->s_3d_y = 0;
	new->s_3d_z = 0;
	new->s_ss = 0;
	new->s_r = 0;
	new->s_g = 0;
	new->s_b = 0;
	return (new);
}
