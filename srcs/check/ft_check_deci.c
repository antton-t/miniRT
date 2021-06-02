#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_deci(char **str)
{
	int	deci;

	deci = 0;
	while (**str == ' ' && **str  != '\0')
		(*str)++;
	if (**str == '-' || **str == '+')
		(*str)++;
	while (((**str >= '0' && **str <= '9') || **str == '.') && **str != '\0')
	{
		if (**str == '.')
			deci++;
		(*str)++;
	}
	if (deci > 1)
		return (-1);
	return (1);
}
