#include "libft.h"
#include "ft_miniRT.h"

t_ght	*ft_init_light(void)
{
	t_ght	*new;

	new = NULL;
	if (!(new = (t_ght *)malloc(sizeof(t_ght))))
		return (NULL);
	new->l_x = 0;
	new->l_y = 0;
	new->l_z = 0;
	new->l_bright = 0;
	new->l_r = 0;
	new->l_g = 0;
	new->l_b = 0;
	return (new);
}
