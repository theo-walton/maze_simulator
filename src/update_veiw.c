/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_veiw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 22:32:48 by twalton           #+#    #+#             */
/*   Updated: 2017/08/24 22:32:48 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static void	get_veiw(t_vector *vect, t_coor pos, t_wall *walls, t_veiw *ray)
{
	int i;
	int wall_type;

	i = 0;
	while (!(wall_type = is_pos_in_wall(pos, walls)))
	{
		pos.x += vect->x;
		pos.y += vect->y;
		++i;
	}
	ray->type = wall_type;
	ray->distance = i;
}

void		update_veiw(t_info *info)
{
	int i;

	i = 0;
	while (i < X_DIM)
	{
		get_veiw(&info->vectarr[i], info->position, info->walls,
		&info->veiw[i]);
		++i;
	}
}
