/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_wall_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 21:53:31 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:24:11 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static t_wall	*create_wall_arr3(t_wall *wallarr)
{
	wallarr[7].x1 = -40;
	wallarr[7].y1 = 40;
	wallarr[7].x2 = -40;
	wallarr[7].y2 = -40;
	wallarr[7].type = 2;
	wallarr[7].length = 80;
	wallarr[8].type = -1;
	return (wallarr);
}

static t_wall	*create_wall_arr2(t_wall *wallarr)
{
	wallarr[3].y2 = -100;
	wallarr[3].type = 4;
	wallarr[3].length = 200;
	wallarr[4].x1 = -40;
	wallarr[4].y1 = -40;
	wallarr[4].x2 = 40;
	wallarr[4].y2 = -40;
	wallarr[4].type = 3;
	wallarr[4].length = 80;
	wallarr[5].x1 = 40;
	wallarr[5].y1 = -40;
	wallarr[5].x2 = 40;
	wallarr[5].y2 = 40;
	wallarr[5].type = 4;
	wallarr[5].length = 80;
	wallarr[6].x1 = 40;
	wallarr[6].y1 = 40;
	wallarr[6].x2 = -40;
	wallarr[6].y2 = 40;
	wallarr[6].type = 1;
	wallarr[6].length = 80;
	return (create_wall_arr3(wallarr));
}

t_wall			*create_wall_arr(int wall_amount)
{
	t_wall *wallarr;

	wallarr = malloc(sizeof(t_wall) * (wall_amount + 4 + 1));
	wallarr[0].x1 = -100;
	wallarr[0].y1 = -100;
	wallarr[0].x2 = 100;
	wallarr[0].y2 = -100;
	wallarr[0].type = 1;
	wallarr[0].length = 200;
	wallarr[1].x1 = 100;
	wallarr[1].y1 = -100;
	wallarr[1].x2 = 100;
	wallarr[1].y2 = 100;
	wallarr[1].type = 2;
	wallarr[1].length = 200;
	wallarr[2].x1 = 100;
	wallarr[2].y1 = 100;
	wallarr[2].x2 = -100;
	wallarr[2].y2 = 100;
	wallarr[2].type = 3;
	wallarr[2].length = 200;
	wallarr[3].x1 = -100;
	wallarr[3].y1 = 100;
	wallarr[3].x2 = -100;
	return (create_wall_arr2(wallarr));
}
