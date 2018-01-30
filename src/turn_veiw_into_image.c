/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turn_veiw_into_image.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:21:57 by twalton           #+#    #+#             */
/*   Updated: 2017/08/24 23:21:57 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static int	wall_col(int type, int distance)
{
	if (type == 1)
		return (shade_colour(0xff4444, distance / 10));
	if (type == 2)
		return (shade_colour(0x55ff99, distance / 10));
	if (type == 3)
		return (shade_colour(0x444499, distance / 10));
	if (type == 4)
		return (shade_colour(0x009999, distance / 10));
	return (0x888888);
}

static void	add_image_columb(t_veiw veiw, int *image, int col)
{
	int ceiling_pixels;
	int wall_pixels;
	int i;

	i = 0;
	if (!(veiw.distance))
		wall_pixels = Y_DIM;
	else
		wall_pixels = SIZE_MODIFIER / veiw.distance;
	if (wall_pixels > Y_DIM)
		wall_pixels = Y_DIM;
	ceiling_pixels = (Y_DIM - wall_pixels) / 2;
	while (i < Y_DIM)
	{
		if (ceiling_pixels-- > 0)
			image[col + i * X_DIM] = CEILING_COL;
		else if (wall_pixels-- > 0)
			image[col + i * X_DIM] = wall_col(veiw.type, veiw.distance);
		else
			image[col + i * X_DIM] = FLOOR_COL;
		++i;
	}
}

void		turn_veiw_into_image(t_veiw *veiw, int *image)
{
	int i;

	i = 0;
	while (i < X_DIM)
	{
		add_image_columb(veiw[i], image, i);
		++i;
	}
}
