/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:34:17 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:02:21 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		reset_pos(t_fract *fract)
{
	FX1_Z = 0;
	FX2_Z = 0;
	FY1_Z = 0;
	FY2_Z = 0;
	FZOOM_Z = 0;
}

static void		dezoom(t_fract *fract)
{
	if (I_MAX - 5 > ITER_MAX)
		I_MAX -= 5;
	if (FZOOM / ZOOM_V > 1.5)
		FZOOM_Z /= 2;
	else
	{
		CHECK = 0;
		reset_pos(fract);
	}
}

int				ft_mouse(int button, int x, int y, t_fract *fract)
{
	if (button == 1 || button == 2 || button == 4 || button == 5)
	{
		if (x >= 0 && x <= WIN_X && y >= 0 && y <= WIN_Y)
		{
			CHECK = 42;
			FX1_Z = FX1 + x / FZOOM;
			FX2_Z = FX2 + x / FZOOM;
			FY1_Z = FY1 + y / FZOOM;
			FY2_Z = FY2 + y / FZOOM;
			if (button == LEFT_CLICK || button == SCROLL_UP)
			{
				FZOOM_Z += FZOOM;
				I_MAX += 5;
			}
			else if (button == RIGHT_CLICK || button == SCROLL_DOWN)
				dezoom(fract);
			new_image(fract);
		}
	}
	return (0);
}
