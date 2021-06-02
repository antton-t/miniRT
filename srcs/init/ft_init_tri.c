#include "libft.h"
#include "ft_miniRT.h"

t_ang	*ft_init_triangle(void)
{
	t_ang	*new;

	new = NULL;
	if (!(new = (t_ang *)malloc(sizeof(t_ang))))
		return (NULL);
	new->t_1_x = 0;
	new->t_1_y = 0;
	new->t_1_z = 0;
	new->t_2_x = 0;
	new->t_2_y = 0;
	new->t_2_z = 0;
	new->t_3_x = 0;
	new->t_3_y = 0;
	new->t_3_z = 0;
	new->t_r = 0;
	new->t_g = 0;
	new->t_b = 0;
	return (new);
}
