#include  "libft.h"
#include "ft_miniRT.h"

int	ft_check_entier(char **str)
{
	char	*ptr;

	ptr = *str;
	while (*ptr == ' ')
		ptr++;
	if (*ptr == '+' || *ptr == '-')
		ptr++;
	while (*ptr >= '0' && *ptr <= '9')
		ptr++;
	*str = ptr;
	return (1);
}
