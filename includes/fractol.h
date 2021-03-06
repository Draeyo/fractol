/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:22:40 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:05:02 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include <math.h>

# define WIN_X 1280
# define WIN_Y 720
# define ITER_MAX 35

# define LEFT_CLICK 1
# define RIGHT_CLICK 2
# define SCROLL_DOWN 4
# define SCROLL_UP 5

# define MANDELBROT 1
# define JULIA 2
# define BIRDY 3
# define BUFFALO 4
# define DRUID 5
# define CELTIC 6
# define CUBIC 7
# define BSHIP 8

# define WHITE 0xFFFFFF
# define BLACK 0x000000
# define RED 0xFF0000
# define GREEN 0x00FF00
# define BLUE 0x0000FF

# define MLX fract->mlx
# define WIN fract->win
# define IMG_P fract->img_p
# define BPP fract->bits_per_pixel
# define SL fract->size_line
# define END fract->endian
# define COLOR fract->color
# define IMG fract->img
# define CHECK fract->check
# define FX fract->x
# define FY fract->y
# define FX1 fract->x1
# define FX1_Z fract->x1_z
# define FX2 fract->x2
# define FX2_Z fract->x2_z
# define FY1 fract->y1
# define FY1_Z fract->y1_z
# define FY2 fract->y2
# define FY2_Z fract->y2_z
# define IMG_X fract->image_x
# define IMG_Y fract->image_y
# define CR fract->cr
# define CI fract->ci
# define JCR fract->jcr
# define JCI fract->jci
# define ZR fract->zr
# define ZI fract->zi
# define FZOOM fract->zoom
# define ZOOM_V fract->zoom_v
# define FZOOM_Z fract->zoom_z
# define FTMP fract->tmp
# define I_MAX fract->iteration_max
# define I fract->i
# define BTAB fract->btab
# define XPOS fract->xpos
# define YPOS fract->ypos
# define JVAR fract->jvar
# define CVAL fract->cval
# define FRACTALE fract->fractale
# define MUSIC fract->music

typedef struct	s_comp
{
	double		nb;
	double		i;
}				t_comp;

typedef struct	s_fract
{
	void		*mlx;
	void		*win;
	void		*img_p;
	int			bits_per_pixel;
	int			size_line;
	int			endian;
	int			color;
	int			fractale;
	char		*img;
	int			check;
	int			music;
	double		x;
	double		y;
	double		x1;
	double		x1_z;
	double		x2;
	double		x2_z;
	double		y1;
	double		y1_z;
	double		y2;
	double		y2_z;
	double		image_x;
	double		image_y;
	double		cr;
	double		ci;
	double		jcr;
	double		jci;
	double		zr;
	double		zi;
	double		tmp;
	int			i;
	double		*btab;
	double		iteration_max;
	double		zoom;
	double		zoom_v;
	double		xpos;
	double		ypos;
	double		zoom_z;
	int			jvar;
	int			cval;
}				t_fract;

/*
** ERRORS
*/
int				check_args(int ac, char *av);
int				check_fract(char *av);
int				ft_fractol_err(int errcode);

/*
** DRAW
*/
void			new_image(t_fract *fract);
void			ft_calc(t_fract *fract, int fractale);
void			put_pixel(t_fract *fract);

/*
** UTILITY
*/
int				ft_key(int keycode, t_fract *fract);
int				ft_expose(t_fract *fract);
int				ft_mouse(int button, int x, int y, t_fract *fract);
int				ft_exit(void *param);

void			init(t_fract *fract);

/*
** FRACTALES
*/
void			init_mandelbrot(t_fract *fract);
void			ft_mandelbrot(t_fract *fract);

void			init_julia(t_fract *fract);
void			ft_julia(t_fract *fract);

void			init_birdy(t_fract *fract);
void			ft_birdy(t_fract *fract);

void			init_buffalo(t_fract *fract);
void			ft_buffalo(t_fract *fract);

void			init_druid(t_fract *fract);
void			ft_druid(t_fract *fract);

void			ft_celtic(t_fract *fract);

void			ft_cubic(t_fract *fract);

void			ft_burnship(t_fract *fract);
/*
** RECALC
*/
void			move(t_fract *fract, int keycode);
void			ft_color(int keycode, t_fract *fract);

int				ft_hook_julia(int x, int y, t_fract *fract);

#endif
