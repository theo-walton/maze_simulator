/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:44:40 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:30:29 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include <math.h>
# include "mlx.h"
# include "libft.h"
# include "wolf_structs.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "keys.h"
# include <time.h>

# define INFIN 9999999999

# define X_DIM 1000
# define Y_DIM 1000
# define VECTOR_SIZE 0.2
# define SIZE_MODIFIER 15000
# define CEILING_COL 0x444444
# define FLOOR_COL 0x222222
# define DIST_ERR 0.5
# define FOV 1.5
# define WALK_UNIT 5

# define ROT_CONST1 0.99211470131
# define ROT_CONST2 0.12533323356

void		set_hooks(t_info *info);
int			key_press_hook(int keynum, t_info *info);
int			key_release_hook(int keynum, t_info *info);
int			loop_hook(t_info *info);

int			shade_colour(int original, int shade_percent);

void		rotate_vectarr(t_vector *vectarr, char sign);

void		move_forward(t_info *info);
void		move_backward(t_info *info);
void		move_left(t_info *info);
void		move_right(t_info *info);

int			is_pos_in_wall(t_coor pos, t_wall *walls);
int			add_initial_state(t_info *info);
t_vector	*create_vector_array(void);
t_wall		*create_wall_arr(int wall_amount);
void		redraw_map(t_info *info);
void		turn_veiw_into_image(t_veiw *veiw, int *image);
void		update_veiw(t_info *info);

#endif
