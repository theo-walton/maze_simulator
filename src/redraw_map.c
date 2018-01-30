/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:02:01 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 15:02:01 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	redraw_map(t_info *info)
{
	t_image im;

	im.ptr = mlx_new_image(info->mlx, X_DIM, Y_DIM);
	im.im = (int*)mlx_get_data_addr(im.ptr, &im.bpp, &im.line_sz, &im.end);
	update_veiw(info);
	turn_veiw_into_image(info->veiw, im.im);
	mlx_clear_window(info->mlx, info->win);
	mlx_put_image_to_window(info->mlx, info->win, im.ptr, 0, 0);
	mlx_destroy_image(info->mlx, im.ptr);
}
