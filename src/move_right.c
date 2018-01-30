/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 15:22:38 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 15:22:38 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	move_right(t_info *info)
{
	t_coor coor;
	double x2;
	double y2;

	x2 = -info->vectarr[X_DIM / 2].y;
	y2 = info->vectarr[X_DIM / 2].x;
	coor.x = info->position.x;
	coor.y = info->position.y;
	coor.x += x2 * WALK_UNIT;
	coor.y += y2 * WALK_UNIT;
	if (is_pos_in_wall(coor, info->walls))
		return ;
	info->position.x = coor.x;
	info->position.y = coor.y;
}
