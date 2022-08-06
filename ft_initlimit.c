/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlimit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:38:09 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:38:26 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

void	ft_initlimit(t_limit *limit)
{
	limit->x_min = DBL_MAX;
	limit->x_max = -DBL_MAX;
	limit->y_min = DBL_MAX;
	limit->y_max = -DBL_MAX;
}
