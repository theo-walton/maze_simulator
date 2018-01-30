/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:00:18 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 22:00:18 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static int	expose(t_info *info)
{
	redraw_map(info);
	return (1);
}

static int	exit_hook(t_info *info)
{
	(void)info;
	exit(1);
	return (1);
}

void		set_hooks(t_info *info)
{
	mlx_expose_hook(info->win, expose, info);
	mlx_hook(info->win, 17, 0, exit_hook, info);
	mlx_hook(info->win, 2, 0, key_press_hook, info);
	mlx_hook(info->win, 3, 0, key_release_hook, info);
	mlx_loop_hook(info->mlx, loop_hook, info);
}
