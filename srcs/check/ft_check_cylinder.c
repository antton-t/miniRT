#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_cylinder(char *str)
{
	int	i;
	int	j;

	i = 8;
	j = 3;
	if (ft_check_letter(str) == 0)
		return (0);
	while (*str)
	{
		if (i == 0 && ft_check_entier(&str) == 1)
			j--;
		else if (i == 0 && ft_check_entier(&str) == 0)
			return (0);
		else if (ft_check_deci(&str) == 1)
			i--;
		else if  (ft_check_deci(&str) == -1)
			return (0);
		if (*str == ',' || *str == ' ')
			str++;
	}
	if (i == 0 && j == 0)
		return (1);
	return (0);
}
