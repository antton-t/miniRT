#include "libft.h"
#include "ft_miniRT.h"

t_ere	*ft_init_sphere(void)
{
	t_ere	*new;

	new = NULL;
	if (!(new = (t_ere *)malloc(sizeof(t_ere))))
		return (NULL);
	new->s_x = 0;
	new->s_y = 0;
	new->s_z = 0;
	new->s_dia = 0;
	new->s_r = 0;
	new->s_g = 0;
	new->s_b = 0;
	return (new);
}
