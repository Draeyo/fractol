/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:31:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/16 15:37:31 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_exit(void *param)
{
	t_fract		*fract;

	fract = (t_fract*)param;
	ft_printf("\033[31mClosing ...\033[0m\n");
	mlx_clear_window(MLX, WIN);
	mlx_destroy_window(MLX, WIN);
	if (MUSIC)
		system("killall afplay");
	exit(EXIT_SUCCESS);
	return (0);
}
