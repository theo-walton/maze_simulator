/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shade_colour.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 17:18:19 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 17:18:19 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int	shade_colour(int original, int shade_percent)
{
	int red;
	int blue;
	int green;

	if (shade_percent > 100)
		shade_percent = 100;
	blue = original % 256;
	original /= 256;
	green = original % 256;
	red = original / 256;
	blue = (blue * (100 - shade_percent)) / 100;
	red = (red * (100 - shade_percent)) / 100;
	green = (green * (100 - shade_percent)) / 100;
	return (blue + green * 256 + red * 256 * 256);
}
