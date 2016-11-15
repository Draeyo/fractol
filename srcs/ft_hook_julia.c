/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook_julia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:35:01 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 15:04:28 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_hook_julia(int x, int y, t_fract *fract)
{
	double	xt;
	double	yt;

	xt = (double)x;
	yt = (double)y;
	if (FRACTALE == JULIA)
	{
		if ((xt >= 0 && xt <= WIN_X) && (yt >= 0 && yt <= WIN_Y) && JVAR)
		{
			if (xt < XPOS)
				JCR -= 0.1 / (FZOOM / ZOOM_V);
			else if (xt > XPOS)
				JCR += 0.1 / (FZOOM / ZOOM_V);
			if (yt < YPOS)
				JCI -= 0.1 / (FZOOM / ZOOM_V);
			else if (yt > YPOS)
				JCI += 0.1 / (FZOOM / ZOOM_V);
			XPOS = xt;
			YPOS = yt;
			new_image(fract);
		}
	}
	return (0);
}
