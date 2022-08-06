/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:03:02 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 10:37:22 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

t_point	*ft_pointnew(double x, double y, double z, int color)
{
	t_point	*res;

	res = (t_point *)malloc(sizeof(t_point));
	if (res == NULL)
		return (NULL);
	res->x = x;
	res->y = y;
	res->z = z;
	res->z = z * 1.4;
	res->color = color;
	res->next = NULL;
	return (res);
}
