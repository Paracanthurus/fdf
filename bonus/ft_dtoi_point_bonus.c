/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoi_point_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:27:36 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_dtoi_point(t_point_int *p, t_point *p_dbl)
{
	p->x = round(p_dbl->x);
	p->y = round(p_dbl->y);
	p->z = round(p_dbl->z);
	p->color = p_dbl->color;
}
