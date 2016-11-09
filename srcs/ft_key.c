/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:57:33 by vlistrat          #+#    #+#             */
/*   Updated: 2016/11/09 15:23:49 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_key(int keycode, t_fract *fract)
{
	if (keycode == 53)
		ft_exit(fract);
	else if (keycode == 21)
		COLOR = 0xFFFFFF;
	return (0);
}
