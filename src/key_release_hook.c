/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release_hook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:05:31 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 22:05:31 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int	key_release_hook(int keynum, t_info *info)
{
	if (keynum == KEY_Q)
		info->keytog->q = 0;
	if (keynum == KEY_E)
		info->keytog->e = 0;
	if (keynum == KEY_W)
		info->keytog->w = 0;
	if (keynum == KEY_A)
		info->keytog->a = 0;
	if (keynum == KEY_S)
		info->keytog->s = 0;
	if (keynum == KEY_D)
		info->keytog->d = 0;
	if (keynum == KEY_ESC)
		exit(1);
	return (1);
}
