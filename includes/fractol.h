/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:22:40 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:40:12 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include <math.h>

# define MANDELBROT 1
# define JULIA 2

# define MLX fract->mlx
# define WIN fract->win
# define WIN_X fract->win_x
# define WIN_Y fract->win_y
# define IMG_P fract->img_p
# define BPP fract->bits_per_pixel
# define SL fract->size_line
# define END fract->endian
# define COLOR fract->color
# define IMG fract->img
# define FX fract->x
# define FY fract->y
# define FRACTALE fract->fractale

typedef struct	s_comp
{
	double		nb;
	double		i;
}

typedef struct	s_fract
{
	/* base */
	void		*mlx;
	void		*win;
	void		*img_p;
	int			win_x;
	int			win_y;
	int			bits_per_pixel;
	int			size_line;
	int			endian;
	int			color;
	char		*img;
	/* coord */
	double			x;
	double			y;
	int			fractale;
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

/*
** FRACTALES
*/
void			ft_mandelbrot(t_fract *fract);
void			ft_julia(t_fract *fract);

/*
**
*/

/*
**
*/

#endif
