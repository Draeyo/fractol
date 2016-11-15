/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:22:03 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 16:30:02 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_color(int keycode, t_fract *fract)
{
	if (keycode == 18)
		CVAL = 0xFF;
	else if (keycode == 19)
		CVAL = 0xFFFF;
	else if (keycode == 20)
		CVAL = 0xFFFFF;
	else if (keycode == 21)
		CVAL = 0xFFFFFF;
	else if (keycode == 23)
		CVAL = 0xFFFFFFF;
	else if (keycode == 22)
		CVAL = 0xFF00FFF;
	else if (keycode == 26)
		CVAL = 0xFF0F0FF;
	else if (keycode == 28)
		CVAL = 0xF0F0F0F;
	else if (keycode == 25)
		CVAL = 0xF0FF00F;
	else if (keycode == 29)
		CVAL = 0xF00FF0F;
	new_image(fract);
}
