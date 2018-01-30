/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_hook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:07:54 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 22:07:54 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int	loop_hook(t_info *info)
{
	int tog;

	tog = 0;
	if (info->keytog->q && (tog = 1))
		rotate_vectarr(info->vectarr, '-');
	if (info->keytog->e && (tog = 1))
		rotate_vectarr(info->vectarr, '+');
	if (info->keytog->w && (tog = 1))
		move_forward(info);
	if (info->keytog->s && (tog = 1))
		move_backward(info);
	if (info->keytog->a && (tog = 1))
		move_left(info);
	if (info->keytog->d && (tog = 1))
		move_right(info);
	if (tog)
		redraw_map(info);
	return (1);
}
