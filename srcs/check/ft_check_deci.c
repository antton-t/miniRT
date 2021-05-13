#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_deci(char **str)
{
	char	*ptr;
	int	i;

	i = 1;
	ptr = *str;
	while (*ptr == ' ')
		ptr++;
	while (*ptr == '.' || (*ptr >= '0' && *ptr <= '9'))
	{
		if (*ptr == '.')
			i--;
		ptr++;
	}
	if (i != 0)
		return (0);
	*str = ptr;
	return (1);
}
