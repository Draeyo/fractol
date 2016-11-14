/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:57:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 17:16:04 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*
** KEYCODES
** 38 = J  -- 46 == M -- 11 = B -- 32 = U -- 2 = D --
**
**
*/

int		ft_key(int keycode, t_fract *fract)
{
	if (keycode == 53)
		ft_exit(fract);
	else if (keycode == 38 || keycode == 46 || keycode == 11 || keycode == 32 || keycode == 2)
	{
		CHECK = 0;
		if (keycode == 38)
			FRACTALE = JULIA;
		 if (keycode == 46)
			FRACTALE = MANDELBROT;
		 if (keycode == 11)
			 FRACTALE = BIRDY;
		if (keycode == 32)
			 FRACTALE = BUFFALO;
		if (keycode == 2)
			FRACTALE = DRUID;
		 init(fract);
		 new_image(fract);
	}
	else if (keycode >= 123 && keycode <= 126)
		move(fract, keycode);
	else if ((keycode >= 18 && keycode <= 23) || keycode == 26)
		ft_color(keycode, fract);
	else
		ft_printf("%d\n", keycode);
	return (0);
}
