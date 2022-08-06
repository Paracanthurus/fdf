/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readpoint_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:35:18 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_readpoint(t_point **point, char **z, size_t y, size_t *x0)
{
	size_t	x;

	x = 0;
	*point = NULL;
	while (z[x] != NULL)
	{
		if (x < *x0)
			(ft_pointadd_back(point, (ft_pointnew(x, y, ft_atoi(z[x]),
							ft_readcolor(z[x])))));
		free(z[x]);
		x++;
	}
	if (y == 0)
		*x0 = x;
	free(z);
	if (x < *x0)
		return (FAILURE);
	return (SUCCESS);
}
