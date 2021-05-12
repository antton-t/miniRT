#include "libft.h"
#include "ft_miniRT.h"

t_ion	*ft_init_reso(void)
{
	t_ion	*new;

	new = NULL;
	if (!(new =  (t_ion *)malloc(sizeof(t_ion))))
		return (NULL);
	new->r_x = 0;
	new->r_y = 0;
	return (new);
}
