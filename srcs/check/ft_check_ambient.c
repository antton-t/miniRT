#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_ambient(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if ((str[i] <= '9' && str[i] >= '0') || str[i] == ' ' || str[i] == '.' || str[i] == ',')
			i++;
		else
			return (0);
	}
	i = 3;
printf("%s =>str\n",str);	
	while ( *str)
	{
		if (j == 0 && ft_check_entier(&str) == 1)
			i--;
		else if (ft_check_deci(&str) == 1)
			j--;
		else if (ft_check_deci(&str) == -1)
			return (0);
printf("%i =>i %i =>j %s =>str dans while\n",i,j,str);
		str++;
	}
printf("%i =>i %i =>j \n",i,j);
	if (i == 0 && j == 0)
		return (1);
	return (0);
}
