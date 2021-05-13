#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_ambient(char *str)
{
	int	i;
	int	j;
	int	k;
	char	*ptr;

	i = 0;
	j = 1;
	k = 3;
	ptr = str;
	ptr++;
	ptr++;
	while (ptr[i])
	{
		if ((ptr[i] <= '9' && ptr[i] >= '0') || ptr[i] == ' ' || ptr[i] == '.' || ptr[i] == ',')
			i++;
		else
			return (0);
	}
	while (*ptr)
	{
		if (ft_check_deci(&ptr) == 1)
			j--;
		else if (j == 0 && (ft_check_entier(&ptr) == 1))
			k--;
		ptr++;
	}
	if (k == 0 && j == 0)
		return (1);
	return (0);
}
