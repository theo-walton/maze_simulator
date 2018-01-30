/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_forward.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 23:07:31 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 23:07:31 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	move_forward(t_info *info)
{
	t_coor coor;

	coor.x = info->position.x;
	coor.y = info->position.y;
	coor.x += info->vectarr[X_DIM / 2].x * WALK_UNIT;
	coor.y += info->vectarr[X_DIM / 2].y * WALK_UNIT;
	if (is_pos_in_wall(coor, info->walls))
		return ;
	info->position.x = coor.x;
	info->position.y = coor.y;
}
