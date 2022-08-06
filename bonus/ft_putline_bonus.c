/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putline_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:37:21 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_putline(t_data *img, t_point *s_dbl, t_point *t_dbl)
{
	t_point_int	point;
	t_point_int	s;
	t_point_int	t;
	int			err;

	ft_dtoi_point(&s, s_dbl);
	ft_dtoi_point(&t, t_dbl);
	point = s;
	err = 0;
	while (point.x != t.x || point.y != t.y)
	{
		ft_putpixel(img, point.x, point.y, point.color);
		if (abs(t.x - s.x) >= abs(t.y - s.y))
			ft_calline_dx(&point, &s, &t, &err);
		else
			ft_calline_dy(&point, &s, &t, &err);
	}
	ft_putpixel(img, t.x, t.y, t.color);
}
