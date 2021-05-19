#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_ambient_value(t_ent *amb)
{
	int	i;

	i = 0;
	if (amb->light_range >= 0 && amb->light_range <= 1)
		i++;
	if (amb->a_r >= 0 && amb->a_r <= 255)
		i++;
	if (amb->a_g >= 0 && amb->a_g <= 255)
		i++;
	if (amb->a_b >= 0 && amb->a_b <= 255)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
