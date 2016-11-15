/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:55:25 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/14 17:15:12 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_calc(t_fract *fract, int fractale)
{
	if (FRACTALE == MANDELBROT)
	{
		init_mandelbrot(fract);
		ft_mandelbrot(fract);
	}
	else if (FRACTALE == JULIA)
	{
		init_julia(fract);
		ft_julia(fract);
	}
	else if (FRACTALE == BIRDY)
	{
		init_birdy(fract);
		ft_birdy(fract);
	}
	else if (FRACTALE == BUFFALO)
		ft_buffalo(fract);
	else if (FRACTALE == DRUID)
		ft_druid(fract);
	else if (FRACTALE == CELTIC)
		ft_celtic(fract);
	else if (FRACTALE == CUBIC)
		ft_cubic(fract);
	else if (FRACTALE == BSHIP)
		ft_burnship(fract);
}
