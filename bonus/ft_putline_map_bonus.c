/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putline_map_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:42:17 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_putline_map(t_data *img, t_list *map)
{
	t_point	**col;
	int		i;

	col = ft_col_init(map);
	if (col == NULL)
		return (FAILURE);
	while (col[0] != NULL)
	{
		i = 1;
		while (col[i] != NULL)
		{
			ft_putline(img, col[i - 1], col[i]);
			i++;
		}
		i = 0;
		while (col[i] != NULL)
		{
			if (col[i]->next != NULL)
				ft_putline(img, col[i], col[i]->next);
			col[i] = col[i]->next;
			i++;
		}
	}
	free(col);
	return (SUCCESS);
}
