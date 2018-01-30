/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_initial_state.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 14:41:23 by twalton           #+#    #+#             */
/*   Updated: 2017/08/25 14:41:23 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int	add_initial_state(t_info *info)
{
	info->position.x = 50;
	info->position.y = 50;
	if (!(info->vectarr = create_vector_array()))
		return (0);
	if (!(info->walls = create_wall_arr(4)))
		return (0);
	if (!(info->veiw = malloc(sizeof(t_veiw) * X_DIM)))
		return (0);
	if (!(info->keytog = ft_memalloc(sizeof(t_keytog))))
		return (0);
	return (1);
}
