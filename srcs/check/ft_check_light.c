#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_light(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 3;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == ' ' || str[i] == '.' || str[i] == ',')
			i++;
		else
			return (0);
	}
	i = 4;
	while (*str)
	{
		if (i == 0 && ft_check_entier(&str) == 1)
			j--;
		else if (ft_check_deci(&str) == 1)
			i--;
		else if (ft_check_deci(&str) == -1)
			return (0);
		str++;
	}
	if (i == 0 && j == 0)
		return (1);
	return (0);
}
