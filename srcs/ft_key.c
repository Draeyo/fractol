/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:57:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:04:06 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int		change_key(int k)
{
	if (k == 0 || k == 1 || k == 2 || k == 3 || k == 5)
		return (1);
	else if (k == 4 || k == 38 || k == 40)
		return (1);
	return (0);
}

static void		change_fract(int keycode, t_fract *fract)
{
	CHECK = 0;
	if (keycode == 1)
		FRACTALE = JULIA;
	if (keycode == 0)
		FRACTALE = MANDELBROT;
	if (keycode == 2)
		FRACTALE = BIRDY;
	if (keycode == 3)
		FRACTALE = BUFFALO;
	if (keycode == 5)
		FRACTALE = DRUID;
	if (keycode == 4)
		FRACTALE = CELTIC;
	if (keycode == 38)
		FRACTALE = CUBIC;
	if (keycode == 40)
		FRACTALE = BSHIP;
	init(fract);
	new_image(fract);
}

static void		ft_music(int keycode, t_fract *fract)
{
	if (!MUSIC)
	{
		system("afplay ./music/mario.mp3 &");
		MUSIC = 1;
	}
	else
	{
		system("killall afplay");
		MUSIC = 0;
	}
}

static int		number_key(int k)
{
	if (k == 18 || k == 19 || k == 20 || k == 21)
		return (1);
	else if (k == 23 || k == 22 || k == 26 || k == 28)
		return (1);
	else if (k == 25 || k == 29)
		return (1);
	return (0);
}

int				ft_key(int keycode, t_fract *fract)
{
	if (keycode == 53)
		ft_exit(fract);
	else if (change_key(keycode))
		change_fract(keycode, fract);
	else if (keycode >= 123 && keycode <= 126)
		move(fract, keycode);
	else if (number_key(keycode))
		ft_color(keycode, fract);
	else if (keycode == 257)
	{
		if (!JVAR)
			JVAR = 1;
		else
			JVAR = 0;
	}
	else if (keycode == 46)
		ft_music(keycode, fract);
	return (0);
}
