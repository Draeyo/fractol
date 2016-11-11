/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:13:30 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 16:13:33 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	move(t_fract *fract, int keycode)
{
	FX = 0;
	if (keycode == 123)
		FX1_Z += 0.125 / (FZOOM / ZOOM_V);
	else if (keycode == 124)
		FX1_Z -= 0.125 / (FZOOM / ZOOM_V);
	else if (keycode == 126)
		FY1_Z += 0.125 / (FZOOM / ZOOM_V);
	else if (keycode == 125)
		FY1_Z -= 0.125 / (FZOOM / ZOOM_V);
}
