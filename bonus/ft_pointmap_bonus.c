/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointmap_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 04:14:49 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 04:59:44 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

t_point	*ft_pointcpy(t_point *point)
{
	t_point	*res;
	t_point	*p;

	if (point == NULL)
		return (NULL);
	res = ft_pointnew(point->x, point->y, point->z, point->color);
	if (res == NULL)
		return (NULL);
	p = res;
	while (point->next != NULL)
	{
		point = point->next;
		p->next = ft_pointnew(point->x, point->y, point->z, point->color);
		if (p->next == NULL)
		{
			ft_pointclear(res);
			break ;
		}
		p = p->next;
	}
	return (res);
}
