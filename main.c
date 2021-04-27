/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:29:42 by antton-t          #+#    #+#             */
/*   Updated: 2021/02/10 12:00:16 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_miniRT.h"
# include "libft.h"

/*
int main(int argc, char **argv)
{
  void  *mlx_ptr;
  void  *win_ptr;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window (mlx_ptr, 600, 600, "test" );
  mlx_loop (mlx_ptr);
  return (0);
}
*/
int main (int argc, char **argv)
{
	int   fd;
	char *str1;
	char **out;
	int i = 0;

	if (argc == 2 && (ft_check_argv(argv[1], ".rt") == 1))
	{
		fd = open(argv[1], O_RDONLY);
		if (fd <= 0)
			return (0);
		printf("Your miniRT will be execute\n");
		str1 = ft_get_next_line(fd, 1);
		out = ft_split(str1, '\n');
		while (out[i])
		{
			printf("%s\n",out[i]);
			i++;
		}
		out = ft_rmv_tab(out);
		i = 0;
		while (out[i])
		{
			printf("%s\n",out[i]);
			i++;
		}
	}
	if (argc == 3 && (ft_check_argv(argv[1], ".rt") == 1) && ((ft_check_argv(argv[2], "-save") == 1) || (ft_check_argv(argv[2], "--save") == 1)))
	{
		printf("Your miniRT will be save and execute\n");
	}
	else
		printf("Err0r\n");
	return (0);
}
