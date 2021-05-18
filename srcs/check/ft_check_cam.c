#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_cam(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == ' ' || str[i] == '.' || str[i] == ',')
			i++;
		else
			return (0);
	}
	i = 6;
printf("%i =>i %i =>j\n",i,j);
	while (*str)
	{
		if (i == 0 && ft_check_entier(&str) == 1)
			j--;
		else if (ft_check_deci(&str) == 1)
			i--;
		str++;
	}
printf("%i =>i %i =>j\n",i,j);
	if (i == 0 && j == 0)
		return (1);
	return (0);
}
