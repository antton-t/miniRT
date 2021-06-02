#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_triangle_value(t_ang *tri)
{
	int	i;

	i = 0;
	if (tri->t_g >= 0 && tri->t_g <= 255)
		i++;
	if (tri->t_g >= 0 && tri->t_g <= 255)
		i++;
	if (tri->t_b >= 0 && tri->t_b <= 255)
		i++;
	if (i == 3)
		return (1);
	return (0);
}
