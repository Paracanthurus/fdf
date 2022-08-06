/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calline_dy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:35:47 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:36:53 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

void	ft_calline_dy(t_point_int *point, t_point_int *s, t_point_int *t,
						int *err)
{
	if (s->y < t->y)
		point->y++;
	else
		point->y--;
	*err += ((t->x - s->x) << 1);
	if (*err > abs(t->y - s->y))
	{
		point->x++;
		*err -= (abs(t->y - s->y) << 1);
	}
	else if (*err < -abs(t->y - s->y))
	{
		point->x--;
		*err += (abs(t->y - s->y) << 1);
	}
	point->color = ft_calcolor_dy(point, s, t);
}
