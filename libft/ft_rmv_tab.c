#include "libft.h"

char	**ft_rmv_tab(char  **str)
{
	char	**out;
	int	i;
	int	j;
	int	k;
	int	space;

	i = 0;
	while (str[i])
		i++;
	if (!(out = (char**)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		if(!(out[i] = (char*)malloc(sizeof(char) * (ft_strlen(str[i] + 1)))))
			return (NULL);
		while (str[i][j])
		{
			if (str[i][j] != ' ' ||  str[i][j] != '\t')
			{
				out[i][k] = str[i][j];
				k++;
				j++;
				space = 1;
			}
			if ((str[i][j] == ' ' || str[i][j] == '\t') && space == 1)
			{
				out[i][k] = ' ';
				k++;
				j++;
				space = 0;
			}
			else
				j++;
		}
	}
	return  (out);
}
