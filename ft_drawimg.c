/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawimg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:43:33 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/23 19:31:54 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	ft_drawimg(t_data *img, t_list **map)
{
	t_limit	limit;

	ft_transform(*map);
	ft_getlimit(*map, &limit);
	ft_fitting(*map, &limit);
	if (!ft_putline_map(img, *map))
	{
		ft_lstclear(map, ft_pointclear);
		return (FAILURE);
	}
	ft_lstclear(map, ft_pointclear);
	return (SUCCESS);
}
