/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:34:17 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 16:15:58 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*
 ** bouton principal = 1
 ** molette bas = 4
 ** molette haut = 5
 ** bouton secondaire = 2
 */

int		ft_mouse(int button, int x, int y, t_fract *fract)
{
	if (button == 1 || button == 2 || button == 4 || button == 5)
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
			{
				if (I_MAX - 5 > ITER_MAX)
					I_MAX -= 5;
				FZOOM_Z /= 2;
			}
			new_image(fract);
		}
	return (0);
}
