/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf_structs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 22:13:08 by twalton           #+#    #+#             */
/*   Updated: 2017/08/26 19:29:42 by twalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_STRUCTS_H
# define WOLF_STRUCTS_H

typedef struct	s_wall
{
	double		x1;
	double		y1;
	double		x2;
	double		y2;
	double		length;
	int			type;
}				t_wall;

typedef struct	s_vector
{
	double		x;
	double		y;
}				t_vector;

typedef struct	s_coor
{
	double		x;
	double		y;
}				t_coor;

typedef struct	s_veiw
{
	int			distance;
	int			type;
}				t_veiw;

typedef struct	s_keytog
{
	int			q;
	int			e;
	int			w;
	int			s;
	int			a;
	int			d;
}				t_keytog;

typedef struct	s_info
{
	t_coor		position;
	t_vector	*vectarr;
	t_wall		*walls;
	t_veiw		*veiw;
	void		*mlx;
	void		*win;
	t_keytog	*keytog;
}				t_info;

typedef struct	s_image
{
	void		*ptr;
	int			*im;
	int			bpp;
	int			line_sz;
	int			end;
}				t_image;

#endif
