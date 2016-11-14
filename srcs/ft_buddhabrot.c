/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buddhabrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:47:35 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 16:40:42 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_buddhabrot(t_fract *fract)
{
	FZOOM = ZOOM_V + FZOOM_Z;
	if (CHECK >= 0 && CHECK <= 4)
	{
		FX1 = -2.1;
		FX2 = 0.6;
		FY1 = -1.2;
		FY2 = 1.2;
	}
	else if (CHECK == 42)
	{
		FX1 = FX1_Z - (WIN_X / FZOOM) / 2;
		FX2 = FX2_Z - (WIN_X / FZOOM) / 2;
		FY1 = FY1_Z - (WIN_Y / FZOOM) / 2;
		FY2 = FY2_Z - (WIN_Y / FZOOM) / 2;
	}
	FX = -1;
}

static void		init_pixtab(double **pixtab)
{
	int		x;
	int		y;

	x = -1;
	while (++x <= WIN_X)
	{
		y = -1;
		while (++y <= WIN_Y)
			pixtab[x][y] = 0;
	}
	return (pixtab);
}

void	ft_buddhabrot(t_fract *fract)
{
	double	red_pix[WIN_X][WIN_Y];
	double	green_pix[WIN_X][WIN_Y];
	double	blue_pix[WIN_X][WIN_Y];

	init_pixtab(red_pix);
	init_pixtab(green_pix);
	init_pixtab(blue_pix);
	while (++FX < IMG_X)
	{
		FY = -1;
		while (++FY < IMG_Y)
		{
			CR = FX / FZOOM + FX1;
			CI = FY / FZOOM + FY1;
			ZR = 0;
			ZI = 0;
			I = 0;
			//	définir tmp_pixels comme une liste de coordonnées
			while ((ZR * ZR) + (ZI * ZI) < 4 && I < I_MAX)
			{
				FTMP = ZR;
				ZR = ZR * ZR - ZI * ZI + CR;
				ZI = 2 * ZI * FTMP + CI;
				++I;
				//ajouter les coordonnées ((z_r-x1)*zoom; (z_i-y1)*zoom) au tableau tmp_pixels
			}
			//	si i != iteration_max
			//		Pour chaque valeurs pixel de tmp_pixels
			//si la case pixels[pixel[0]][pixel[1]] existe
			//on incrémente la case en question

			//	Pour chaque case de coordonnée (x; y) de l'image
			//  	Dessiner le pixel de coordonnée (x; y) avec la couleur rgb(min(pixels[x][y], 255), min(pixels[x][y], 255), min(pixels[x][y], 255))
		}
	}
}
