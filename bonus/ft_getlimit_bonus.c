/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlimit_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:39:41 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_getlimit(t_list *map, t_limit *limit)
{
	t_point	*point;

	limit->x_min = DBL_MAX;
	limit->x_max = -DBL_MAX;
	limit->y_min = DBL_MAX;
	limit->y_max = -DBL_MAX;
	while (map != NULL)
	{
		point = map->content;
		while (point != NULL)
		{
			if (limit->x_min > point->x)
				limit->x_min = point->x;
			if (limit->x_max < point->x)
				limit->x_max = point->x;
			if (limit->y_min > point->y)
				limit->y_min = point->y;
			if (limit->y_max < point->y)
				limit->y_max = point->y;
			point = point->next;
		}
		map = map->next;
	}
}
