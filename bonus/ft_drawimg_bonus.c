/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawimg_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:43:33 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 05:05:49 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_drawimg(t_data *img, t_list *map, t_list *map0, t_param *param)
{
	t_limit	limit;

	ft_transform(map, map0, param);
	ft_getlimit(map, &limit);
	ft_fitting(map, &limit);
	if (!ft_putline_map(img, map))
		return (FAILURE);
	return (SUCCESS);
}
