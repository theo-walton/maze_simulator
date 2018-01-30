/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 21:20:48 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:23:23 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

t_vector	*create_vector_array(void)
{
	t_vector	*vectarr;
	int			i;

	i = 0;
	if (!(vectarr = malloc(sizeof(t_vector) * X_DIM)))
		return (NULL);
	while (i < X_DIM)
	{
		vectarr[i].x = VECTOR_SIZE * cos(((double)i / X_DIM) * FOV);
		vectarr[i].y = VECTOR_SIZE * sin(((double)i / X_DIM) * FOV);
		++i;
	}
	return (vectarr);
}
