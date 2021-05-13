#include "libft.h"
#include "ft_miniRT.h"

int	ft_check_reso(char *str)
{
	char	*ptr;
	int	i;
	int	j;

	i = 0;
	j = 3;
	ptr = str;
	ptr++;
	ptr++;
	while (ptr[i])
	{
		if ((ptr[i] <= '9' && ptr[i] >= '0') ||  ptr[i] == ' ')
			i++;
		else
			return (0);
	}
	while(*ptr)
	{
		if (*ptr >= '0' && *ptr <= '9')
		{
			while (*ptr >= '0' && *ptr <= '9')
				ptr++;
			j--;
		}
		ptr++;	
	}
	if (j !=  1)
		return (0);
	return (1);
}
