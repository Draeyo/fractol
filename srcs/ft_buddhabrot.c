/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buddhabrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:47:35 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 12:03:52 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_buddhabrot(t_fract *fract)
{
	FX1 = -2.1;
	FX2 = 0.6;
	FY1 = -1.2;
	FY2 = 1.2;
	FZOOM = 100;
	I_MAX = 100;
	IMG_X = (FX2 - FX1) * FZOOM;
	IMG_Y = (FY2 - FY1) * FZOOM;
	while (FX < IMG_X)
	{
		while (FY < IMG_Y)
		{
			CR = FX / FZOOM + FX1;
			CI = FY / FZOOM + FY1;
			ZR = 0;
			ZI = 0;
			I = 0;
			//	définir tmp_pixels comme une liste de coordonnées
			while (ZR * ZR + ZI * ZI < 4 && I < I_MAX)
			{
				FTMP = ZR;
				ZR = ZR * ZR - ZI * ZI + CR;
				ZI = 2 * ZI * FTMP + CI;
				I++;
				//ajouter les coordonnées ((z_r-x1)*zoom; (z_i-y1)*zoom) au tableau tmp_pixels
			}
			//	si i != iteration_max
			//		Pour chaque valeurs pixel de tmp_pixels
			//si la case pixels[pixel[0]][pixel[1]] existe
			//on incrémente la case en question

			//	Pour chaque case de coordonnée (x; y) de l'image
			//  	Dessiner le pixel de coordonnée (x; y) avec la couleur rgb(min(pixels[x][y], 255), min(pixels[x][y], 255), min(pixels[x][y], 255))
			FY++:
		}
		FX++;
	}
}
