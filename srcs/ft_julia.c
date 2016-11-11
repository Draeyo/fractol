/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:29:59 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 16:18:16 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_julia(t_fract *fract)
{
	if (CHECK >= 0 && CHECK <= 4)
	{
		FX1 = -2.2;
		FX2 = 2.2;
		FY1 = -1.2;
		FY2 = 1.2;
	}
	else
	{
		FX1 = FX1_Z - (WIN_X / FZOOM) / 2;
		FX2 = FX2_Z - (WIN_X / FZOOM) / 2;
		FY1 = FY1_Z - (WIN_Y / FZOOM) / 2;
		FY2 = FY2_Z - (WIN_Y / FZOOM) / 2;
	}
	FX = 0;
}

void	ft_julia(t_fract *fract)
{
	while (FX < WIN_X)
	{
		FY = 0;
		while (FY < WIN_Y)
		{
			CR = 0.285;
			CI = 0.01;
			ZR = FX / FZOOM + FX1;
			ZI = FY / FZOOM + FY1;
			I = 0;
			while ((ZR * ZR) + (ZI * ZI) < 4 && I < I_MAX)
			{
				FTMP = ZR;
				ZR = ZR * ZR - ZI * ZI + CR;
				ZI = 2 * ZI * FTMP + CI;
				++I;
				((I == I_MAX) ? (COLOR = BLACK) : (COLOR = (I * 255 / I_MAX)));
				put_pixel(fract);
			}
			++FY;
		}
		++FX;
	}
}
