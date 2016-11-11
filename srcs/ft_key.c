/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:57:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 16:19:40 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_key(int keycode, t_fract *fract)
{
	if (keycode == 53)
		ft_exit(fract);
	else if (keycode == 38 || keycode == 46)
	{
		CHECK = 0;
		if (keycode == 38)
			FRACTALE = JULIA;
		 if (keycode == 46)
			FRACTALE = MANDELBROT;
		 init(fract);
		 new_image(fract);
	}
	else if (keycode >= 123 && keycode <= 126)
	{
		move(fract, keycode);
		new_image(fract);
	}
	else
		ft_printf("%d\n", keycode);
	return (0);
}
