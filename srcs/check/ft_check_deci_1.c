#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_deci_1(char **str)
{
	char	*ptr;
	int	deci;

	ptr = *str;
	deci = 0;
	if (*ptr == '-' || *ptr == '+')
		ptr++;
	while ((*ptr >= '0' && *ptr <= '9') || *ptr == '.')
	{
		if (*ptr == '.')
			deci++;;
		ptr++;
	}
	if (deci == 1)
	{
		*str = ptr;
		return (1);
	}
	if (deci > 1)
		return (-1);
	return (0);
}
