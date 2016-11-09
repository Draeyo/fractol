/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:27:46 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:26:29 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int ac, char **av)
{
	t_fract		fract;

	if (!check_args(ac, av[1]))
		ft_fractol_err(1);
	fract.mlx = mlx_init();
	fract.win_x = 1280;
	fract.win_y = 720;
	fract.win = mlx_new_window(fract.mlx, fract.win_x, fract.win_y, "fract_ol");
	if (!(fract.fractale = check_fract(av[1])))
		ft_fractol_err(2);
	new_image(&fract);
	mlx_key_hook(fract.win, ft_key, &fract);
	mlx_expose_hook(fract.win, ft_expose, &fract);
	mlx_mouse_hook(fract.win, ft_mouse, &fract);
	mlx_hook(fract.win, 17, (1L << 17), ft_exit, &fract); 
	mlx_loop(fract.mlx);
	return (0);
}
