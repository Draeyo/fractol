/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:55:25 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 16:15:38 by vlistrat         ###   ########.fr       */
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
}
