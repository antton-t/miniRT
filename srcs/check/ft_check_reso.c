#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_reso(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 3;
	if (ft_check_letter(str) == 0)
		return (0);
	while(*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
				str++;
			j--;
		}
		str++;	
	}
	if (j !=  1)
		return (0);
	return (1);
}
