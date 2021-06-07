#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_ambient_value(t_ent *am)
{
	int	i;

	i = 0;

	if (am->light_range >= 0 && am->light_range <= 1)
		i++;
	if (am->a_r >= 0 && am->a_r <= 255)
		i++;
	if (am->a_g >= 0 && am->a_g <= 255)
		i++;
	if (am->a_b >= 0 && am->a_b <= 255)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
