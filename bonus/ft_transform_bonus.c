/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:17:50 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 05:00:31 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_aisome(t_point *point, t_point *point0);
void	ft_cabine(t_point *point, t_point *point0);

void	ft_transform(t_list *map, t_list *map0, t_param *param)
{
	t_point		*point;
	t_point		*point0;

	while (map != NULL)
	{
		point = (t_point *)map->content;
		point0 = (t_point *)map0->content;
		while (point != NULL)
		{
			if (param->mode == 0)
				ft_aisome(point, point0);
			else if (param->mode == 1)
				ft_cabine(point, point0);
			point = point->next;
			point0 = point0->next;
		}
		map = map->next;
		map0 = map0->next;
	}
}

void	ft_aisome(t_point *point, t_point *point0)
{
	double	x;
	double	y;
	double	z;

	x = point0->x;
	y = -point0->y;
	z = point0->z;
	point->x = sqrt(1. / 2) * x + sqrt(1. / 2) * y;
	point->y = -sqrt(1. / 6) * x + sqrt(1. / 6) * y + sqrt(2. / 3) * z;
	point->y *= -1;
}

void	ft_cabine(t_point *point, t_point *point0)
{
	double	x;
	double	y;
	double	z;

	x = point0->x;
	y = -point0->y;
	z = point0->z;
	point->x = x + sqrt(1. / 8) * y;
	point->y = z + sqrt(1. / 8) * y;
	point->y *= -1;
}
