/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:29:27 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:36:13 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		check_args(int ac, char *av)
{
	if (ac != 2)
	{
		ft_putstr_fd("Wring number of arguments.\nExpected 1, have ", 2);
		ft_putnbr_fd((ac - 1), 2);
		ft_putendl_fd(".", 2);
		return (0);
	}
	else if (ft_strcmp(av, "Mandelbrot") != 0 && ft_strcmp(av, "Julia") != 0)
	{
		ft_putendl_fd("Valid fractales : Mandelbrot, Julia", 2);
		return (0);
	}
	return (1);
}
