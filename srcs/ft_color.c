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
	new_image(fract);
}
