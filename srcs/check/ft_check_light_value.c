#include  "ft_miniRT.h"
#include "libft.h"

int	ft_check_light_value(t_ght *lig)
{
	int	i;

	i = 0;
	if (lig->l_bright >= 0 && lig->l_bright <= 1)
		i++;
	if (lig->l_r >= 0 && lig->l_r <= 255)
		i++;
	if (lig->l_g >= 0 && lig->l_g <= 255)
		i++;
	if (lig->l_b >= 0 && lig->l_b <= 255)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
