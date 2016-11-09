/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:55:25 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:29:23 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_calc(t_fract *fract, int fractale)
{
	if (FRACTALE == MANDELBROT)
		ft_mandelbrot(fract);
	else if (FRACTALE == JULIA)
		ft_julia(fract);
}
