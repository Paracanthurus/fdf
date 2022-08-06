/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcolor_dx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:29:48 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	ft_calcolor_dx(t_point_int *point, t_point_int *s, t_point_int *t)
{
	t_color	rgb_s;
	t_color	rgb_t;
	t_color	rgb_p;

	if (t->x - s->x == 0)
		return (t->color);
	ft_itorgb(&rgb_s, s->color);
	ft_itorgb(&rgb_t, t->color);
	rgb_p.t = (round((float)(rgb_t.t - rgb_s.t) / (t->x - s->x)
				* (point->x - s->x) + rgb_s.t));
	rgb_p.r = (round((float)(rgb_t.r - rgb_s.r) / (t->x - s->x)
				* (point->x - s->x) + rgb_s.r));
	rgb_p.g = (round((float)(rgb_t.g - rgb_s.g) / (t->x - s->x)
				* (point->x - s->x) + rgb_s.g));
	rgb_p.b = (round((float)(rgb_t.b - rgb_s.b) / (t->x - s->x)
				* (point->x - s->x) + rgb_s.b));
	return (ft_rgbtoi(&rgb_p));
}
