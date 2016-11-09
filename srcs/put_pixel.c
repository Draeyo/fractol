/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:46:08 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 13:49:23 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_pixel(t_fract *fract)
{
	int		var;

	var = (BPP / 8) + SL;
	if (END == 0)
	{
		IMG[var] = COLOR;
		IMG[++var] = COLOR >> 8;
		IMG[++var] = COLOR >> 16;
	}
	else
	{
		IMG[var] = COLOR >> 16;
		IMG[++var] = COLOR >> 8;
		IMG[++var] = COLOR;
	}
}
