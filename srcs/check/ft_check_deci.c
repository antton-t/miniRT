#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_deci(char **str)
{
	char	*ptr;

	ptr = *str;
	while (*ptr == ' ')
		ptr++;
	if (*ptr == '-' || *ptr == '+')
		ptr++;
	while (*ptr == '.' || (*ptr >= '0' && *ptr <= '9'))
	{
		ptr++;
	}
	*str = ptr;
	return (1);
}
