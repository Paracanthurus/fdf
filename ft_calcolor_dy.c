/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcolor_dy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:30:55 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 00:20:49 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	ft_calcolor_dy(t_point_int *point, t_point_int *s, t_point_int *t)
{
	t_color	rgb_s;
	t_color	rgb_t;
	t_color	rgb_p;

	if (t->y - s->y == 0)
		return (t->color);
	ft_itorgb(&rgb_s, s->color);
	ft_itorgb(&rgb_t, t->color);
	rgb_p.t = (round((float)(rgb_t.t - rgb_s.t) / (t->y - s->y)
				* (point->y - s->y) + rgb_s.t));
	rgb_p.r = (round((float)(rgb_t.r - rgb_s.r) / (t->y - s->y)
				* (point->y - s->y) + rgb_s.r));
	rgb_p.g = (round((float)(rgb_t.g - rgb_s.g) / (t->y - s->y)
				* (point->y - s->y) + rgb_s.g));
	rgb_p.b = (round((float)(rgb_t.b - rgb_s.b) / (t->y - s->y)
				* (point->y - s->y) + rgb_s.b));
	return (ft_rgbtoi(&rgb_p));
}
