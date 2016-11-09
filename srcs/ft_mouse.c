/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:34:17 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 14:17:31 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_mouse(int button, int x, int y, t_fract *fract)
{
	if (FRACTALE == JULIA)
	{
		x = 0;
		y = 0;
		COLOR = 0xFFFFFF;
	}
	else if (!button)
		return (0);
	return (0);
}
