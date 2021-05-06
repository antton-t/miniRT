#ifndef STRUCT_H
# define STRUCT_H

typedef struct r_ion
{
	int	r_x;
	int	r_y;
}				t_ion;

typedef  struct a_ent
{
	int	light_range;
	int	a_r;
	int	a_g;
	int	a_b;
}				t_ent;

typedef	struct  c_era
{
	int	c_x;
	int	c_y;
	int	c_z;
	int	c_3d_x;
	int	c_3d_y;
	int	c_3d_z;
	int	c_fov;
}				t_era;

typedef	struct	l_ght
{
	int	l_x;
	int	l_y;
	int	l_z;
	int	l_bright;
	int	l_r;
	int	l_g;
	int	l_b;
}				t_ght;
#endif
