/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_celtic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:59:13 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 10:59:35 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	init_celtic(t_fract *fract)
{
	FZOOM = ZOOM_V + FZOOM_Z;
	if (CHECK >= 0 && CHECK <= 4)
	{
		FX1 = -2.5 + FX1_Z;
		FX2 = 0.6 + FX2_Z;
		FY1 = -1.2 + FY1_Z;
		FY2 = 1.2 + FY2_Z;
	}
	else if (CHECK == 42)
	{
		FX1 = FX1_Z - (WIN_X / FZOOM) / 2;
		FX2 = FX2_Z + (WIN_X / FZOOM) / 2;
		FY1 = FY1_Z - (WIN_Y / FZOOM) / 2;
		FY2 = FY2_Z + (WIN_Y / FZOOM) / 2;
	}
	FX = -1;
}

void		ft_celtic(t_fract *fract)
{
	init_celtic(fract);
	while (++FX < WIN_X)
	{
		FY = -1;
		while (++FY < WIN_Y)
		{
			I = 0;
			CR = (FX / FZOOM + FX1);
			CI = (FY / FZOOM + FY1);
			ZR = 0;
			ZI = 0;
			while (ZR * ZR + ZI * ZI < 4 && I < I_MAX)
			{
				FTMP = ZR;
				ZR = fabs((ZR * ZR) - (ZI * ZI)) + CR;
				ZI = -(2 * ZI * FTMP + CI);
				++I;
				COLOR = ((I == I_MAX) ? BLACK : (I * CVAL / I_MAX));
				put_pixel(fract);
			}
		}
	}
}
