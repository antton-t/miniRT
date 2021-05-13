#ifndef STRUCT_H
# define STRUCT_H

typedef struct r_ion
{
	int	r_x;
	int	r_y;
}				t_ion;

typedef  struct a_ent
{
	double	light_range;
	int	a_r;
	int	a_g;
	int	a_b;
}				t_ent;

typedef	struct  c_era
{
	double	c_x;
	double	c_y;
	double	c_z;
	double	c_3d_x;
	double	c_3d_y;
	double	c_3d_z;
	int	c_fov;
}				t_era;

typedef	struct	l_ght
{
	double	l_x;
	double	l_y;
	double	l_z;
	double	l_bright;
	int	l_r;
	int	l_g;
	int	l_b;
}				t_ght;
#endif
