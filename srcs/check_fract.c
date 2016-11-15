/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fract.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:15:47 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:17:16 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		check_fract(char *av)
{
	if (ft_strcmp(av, "Mandelbrot") == 0)
		return (1);
	else if (ft_strcmp(av, "Julia") == 0)
		return (2);
	else if (ft_strcmp(av, "Bird") == 0)
		return (3);
	else if (ft_strcmp(av, "Buffalo") == 0)
		return (4);
	else if (ft_strcmp(av, "Druid") == 0)
		return (5);
	else if (ft_strcmp(av, "Celtic") == 0)
		return (6);
	else if (ft_strcmp(av, "Cubic") == 0)
		return (7);
	else if (ft_strcmp(av, "Burnship") == 0)
		return (8);
	return (0);
}
