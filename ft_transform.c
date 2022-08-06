/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:17:50 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:11:14 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

void	ft_transform(t_list *map)
{
	t_point	*point;
	double	x;
	double	y;
	double	z;

	while (map != NULL)
	{
		point = (t_point *)map->content;
		while (point != NULL)
		{
			x = point->x;
			y = -point->y;
			z = point->z;
			point->x = sqrt(1. / 2) * x + sqrt(1. / 2) * y;
			point->y = -sqrt(1. / 6) * x + sqrt(1. / 6) * y + sqrt(2. / 3) * z;
			point->y *= -1;
			point = point->next;
		}
		map = map->next;
	}
}
