#include "libft.h"
#include "ft_miniRT.h"

t_ent	*ft_init_ambi(void)
{
	t_ent	*new;

	new = NULL;
	if (!(new = (t_ent *)malloc(sizeof(t_ent))))
		return (NULL);
	new->light_range = 0;
	new->a_r = 0;
	new->a_g = 0;
	new->a_b = 0;
	return (new);
}
