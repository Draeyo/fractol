/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:44:12 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/11 10:04:40 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	new_image(t_fract *fract)
{
	IMG_P = mlx_new_image(MLX, WIN_X, WIN_Y);
	IMG = mlx_get_data_addr(IMG_P, &BPP, &SL, &END);
	ft_calc(fract, FRACTALE);
	mlx_put_image_to_window(MLX, WIN, IMG_P, 0, 0);
	mlx_destroy_image(MLX, IMG_P);
}
