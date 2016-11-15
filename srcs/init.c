/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:54:14 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 16:19:08 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init(t_fract *fract)
{
	FX = 0;
	FX1 = 0;
	FX1_Z = 0;
	FX2 = 0;
	FX2_Z = 0;
	FY = 0;
	FY1 = 0;
	FY1_Z = 0;
	FY2 = 0;
	FY2_Z = 0;
	I = 0;
	FZOOM_Z = 0;
	I_MAX = ITER_MAX;
	CHECK = 0;
	XPOS = 0;
	YPOS = 0;
	JCR = 0;
	JCI = 0;
	JVAR = 1;
	CVAL = 0xFF;
	ZOOM_V = 300.00;
	MUSIC = 0;
}
