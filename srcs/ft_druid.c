/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_druid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:09:56 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:00:32 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_druid(t_fract *fract)
{
	FZOOM = ZOOM_V + FZOOM_Z;
	if (CHECK >= 0 && CHECK <= 4)
	{
		FX1 = -2.2 + FX1_Z;
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

void	ft_druid(t_fract *fract)
{
	init_druid(fract);
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
			while ((ZR * ZR) + (ZI * ZI) < 4 && I < I_MAX)
			{
				FTMP = ZR;
				if (I % 2 == 0)
					ZR = (ZR * ZR) - (ZI * ZI) + CR;
				else
					ZR = fabs((ZR * ZR) - (ZI * ZI)) + CR;
				ZI = -(2 * ZI * FTMP) + CI;
				++I;
				COLOR = ((I == I_MAX) ? BLACK : (I * CVAL / I_MAX));
				put_pixel(fract);
			}
		}
	}
}
