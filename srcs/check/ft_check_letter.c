#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= '9' && str[i] >= '0') || str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}
