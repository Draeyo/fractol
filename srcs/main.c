/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:27:46 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 11:02:42 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int ac, char **av)
{
	t_fract		fract;

	if (!check_args(ac, av[1]))
		ft_fractol_err(1);
	fract.mlx = mlx_init();
	fract.win = mlx_new_window(fract.mlx, WIN_X, WIN_Y, "fract_ol");
	if (!(fract.fractale = check_fract(av[1])))
		ft_fractol_err(2);
	init(&fract);
	new_image(&fract);
	mlx_key_hook(fract.win, ft_key, &fract);
	mlx_expose_hook(fract.win, ft_expose, &fract);
	mlx_mouse_hook(fract.win, ft_mouse, &fract);
	mlx_hook(fract.win, 17, (1L << 17), ft_exit, &fract);
	mlx_hook(fract.win, 6, (1L << 6), ft_hook_julia, &fract);
	mlx_loop(fract.mlx);
	return (0);
}
