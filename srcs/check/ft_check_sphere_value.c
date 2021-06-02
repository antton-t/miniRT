#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_sphere_value(t_ere *sph)
{
	int	i;

	i = 0;
	if (sph->s_g >= 0 && sph->s_g <= 255)
		i++;
	if (sph->s_g >= 0 && sph->s_g <= 255)
		i++;
	if (sph->s_b >= 0 && sph->s_b <= 255)
		i++;
	if (i == 3)
		return (1);
	return (0);
}
