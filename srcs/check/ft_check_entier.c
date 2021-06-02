#include  "libft.h"
#include "ft_miniRT.h"

int	ft_check_entier(char **str)
{
	int	i;
	char	*ptr;

	i = 0;
	while (**str == ' ')
		(*str)++;
	if (**str == '+' || **str == '-')
		(*str)++;
	ptr = *str;
	while (**str >= '0' && **str <= '9')
		(*str)++;
	while (ptr[i] >= '0' && ptr[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	return (1);
}
