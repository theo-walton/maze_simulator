/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 19:03:06 by twalton           #+#    #+#             */
/*   Updated: 2017/08/24 19:03:06 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static void	error_out(int x)
{
	if (x == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int			main(void)
{
	t_info info;

	info.mlx = mlx_init();
	if (!(add_initial_state(&info)))
		error_out(1);
	info.win = mlx_new_window(info.mlx, X_DIM, Y_DIM, "");
	set_hooks(&info);
	mlx_loop(info.mlx);
}
