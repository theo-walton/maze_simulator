/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pos_in_wall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 23:19:20 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:12:36 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static double	dist(double x1, double y1, double x2, double y2)
{
	x1 = fabs(x2 - x1);
	y1 = fabs(y2 - y1);
	return (hypot(x1, y1));
}

int				is_pos_in_wall(t_coor pos, t_wall *walls)
{
	int		i;
	double	dist_a;
	double	dist_b;

	i = 0;
	while (walls[i].type != -1)
	{
		dist_a = dist(pos.x, pos.y, walls[i].x1, walls[i].y1);
		dist_b = dist(pos.x, pos.y, walls[i].x2, walls[i].y2);
		if (fabs(walls[i].length - dist_a - dist_b) < DIST_ERR)
			return (walls[i].type);
		++i;
	}
	return (0);
}
