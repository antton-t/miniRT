#ifndef STRUCT_H
# define STRUCT_H

typedef struct r_ion
{
	int	r_x;
	int	r_y;
	int	ok;
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

typedef	struct	s_ere
{
	double	s_x;
	double	s_y;
	double	s_z;
	double	s_dia;
	int	s_r;
	int	s_g;
	int	s_b;
}				t_ere;

typedef	struct	p_ane
{
	double	p_x;
	double	p_y;
	double	p_z;
	double	p_3d_x;
	double	p_3d_y;
	double	p_3d_z;
	int	p_r;
	int	p_g;
	int	p_b;
}				t_ane;

typedef	struct	s_are
{
	double	s_x;
	double	s_y;
	double	s_z;
	double	s_3d_x;
	double	s_3d_y;
	double	s_3d_z;
	double	s_ss;
	int	s_r;
	int	s_g;
	int	s_b;
}				t_are;

typedef	struct	c_der
{
	double	c_x;
	double	c_y;
	double	c_z;
	double	c_3d_x;
	double	c_3d_y;
	double	c_3d_z;
	double	c_d;
	double	c_h;
	int	c_r;
	int	c_g;
	int	c_b;
}				t_der;

typedef	struct	t_gle
{
	double	t_1_x;
	double	t_1_y;
	double	t_1_z;
	double	t_2_x;
	double	t_2_y;
	double	t_2_z;
	double	t_3_x;
	double	t_3_y;
	double	t_3_z;
	int	t_r;
	int	t_g;
	int	t_b;
}				t_ang;
#endif
