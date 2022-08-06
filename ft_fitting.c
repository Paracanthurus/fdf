/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fitting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:40:30 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

void	ft_fitting(t_list *map, t_limit *limit)
{
	double	scale;
	t_point	*point;

	scale = X * 0.8 / (limit->x_max - limit->x_min + DBL_MIN);
	if (scale > Y * 0.8 / (limit->y_max - limit->y_min + DBL_MIN))
		scale = Y * 0.8 / (limit->y_max - limit->y_min + DBL_MIN);
	if (scale >= DBL_MAX)
		scale = 1;
	while (map != NULL)
	{
		point = map->content;
		while (point != NULL)
		{
			point->x *= scale;
			point->y *= scale;
			point->x += X / 2. - ((limit->x_max + limit->x_min) * scale) / 2;
			point->y += Y / 2. - ((limit->y_max + limit->y_min) * scale) / 2;
			point = point->next;
		}
		map = map->next;
	}
}
