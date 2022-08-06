/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calline_dx_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:30:23 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_calline_dx(t_point_int *point, t_point_int *s, t_point_int *t,
						int *err)
{
	if (s->x < t->x)
		point->x++;
	else
		point->x--;
	*err += ((t->y - s->y) << 1);
	if (*err > abs(t->x - s->x))
	{
		point->y++;
		*err -= (abs(t->x - s->x) << 1);
	}
	else if (*err < -abs(t->x - s->x))
	{
		point->y--;
		*err += (abs(t->x - s->x) << 1);
	}
	point->color = ft_calcolor_dx(point, s, t);
}
