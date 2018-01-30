/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:03:02 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 22:03:02 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int	key_press_hook(int keynum, t_info *info)
{
	if (keynum == KEY_Q)
		info->keytog->q = 1;
	if (keynum == KEY_E)
		info->keytog->e = 1;
	if (keynum == KEY_W)
		info->keytog->w = 1;
	if (keynum == KEY_A)
		info->keytog->a = 1;
	if (keynum == KEY_S)
		info->keytog->s = 1;
	if (keynum == KEY_D)
		info->keytog->d = 1;
	return (1);
}
