/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:29:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:01:13 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mandelbrot(t_fract *fract)
{
	FZOOM = ZOOM_V + FZOOM_Z;
	if (CHECK == 0)
	{
		FX1 = -2.6 + FX1_Z;
		FX2 = 1.66 + FX2_Z;
		FY1 = -1.2 + FY1_Z;
		FY2 = 1.2 + FY2_Z;
	}
	else
	{
		FX1 = FX1_Z - (WIN_X / FZOOM) / 2;
		FX2 = FX2_Z - (WIN_X / FZOOM) / 2;
		FY1 = FY1_Z - (WIN_Y / FZOOM) / 2;
		FY2 = FY2_Z - (WIN_Y / FZOOM) / 2;
	}
	FX = -1;
}

void	ft_mandelbrot(t_fract *fract)
{
	while (++FX < WIN_X)
	{
		FY = -1;
		while (++FY < WIN_Y)
		{
			CR = FX / FZOOM + FX1;
			CI = FY / FZOOM + FY1;
			ZR = 0;
			ZI = 0;
			I = 0;
			while (((ZR * ZR) + (ZI * ZI)) < 4 && I < I_MAX)
			{
				FTMP = ZR;
				ZR = ZR * ZR - ZI * ZI + CR;
				ZI = 2 * ZI * FTMP + CI;
				++I;
				COLOR = ((I == I_MAX) ? BLACK : (I * CVAL / I_MAX));
				put_pixel(fract);
			}
		}
	}
}
