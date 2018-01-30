/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vectarr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 21:32:37 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:23:44 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	rotate_vectarr(t_vector *vectarr, char sign)
{
	int		i;
	double	oldx;
	double	oldy;

	i = 0;
	while (i < X_DIM)
	{
		oldx = vectarr[i].x;
		oldy = vectarr[i].y;
		if (sign == '+')
		{
			vectarr[i].x = ROT_CONST1 * oldx - ROT_CONST2 * oldy;
			vectarr[i].y = ROT_CONST2 * oldx + ROT_CONST1 * oldy;
		}
		else
		{
			vectarr[i].x = ROT_CONST1 * oldx + ROT_CONST2 * oldy;
			vectarr[i].y = ROT_CONST1 * oldy - ROT_CONST2 * oldx;
		}
		++i;
	}
}
