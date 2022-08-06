/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoi_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:27:36 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

void	ft_dtoi_point(t_point_int *p, t_point *p_dbl)
{
	p->x = round(p_dbl->x);
	p->y = round(p_dbl->y);
	p->z = round(p_dbl->z);
	p->color = p_dbl->color;
}
