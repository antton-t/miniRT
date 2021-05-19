#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_deci(char **str)
{
	char	*ptr;
	int	deci;

	ptr = *str;
	deci = 0;
	while (*ptr == ' ')
		ptr++;
	if (*ptr == '-' || *ptr == '+')
		ptr++;
	while ((*ptr >= '0' && *ptr <= '9') || *ptr == '.')
	{
		if (*ptr == '.')
			deci++;
		ptr++;
	}
	if (deci > 1)
		return (-1);
	*str = ptr;
	return (1);
}
