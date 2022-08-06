/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:41:32 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

t_point	**ft_col_init(t_list *map)
{
	t_point	**col;
	int		i;

	col = malloc(sizeof(t_point *) * (ft_lstsize(map) + 1));
	if (col == NULL)
		return (NULL);
	i = 0;
	while (map != NULL)
	{
		col[i] = map->content;
		map = map->next;
		i++;
	}
	col[i] = NULL;
	return (col);
}
