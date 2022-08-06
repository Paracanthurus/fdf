/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:35:56 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_readmap(t_list **map, int fd)
{
	char	**z;
	t_point	*point;
	size_t	y;
	size_t	x0;

	*map = NULL;
	if (fd == -1)
		return (FAILURE);
	x0 = SIZE_T_MAX;
	y = 0;
	errno = 0;
	while (true)
	{
		z = ft_gnl_and_split(fd, ' ');
		if (z == NULL)
			break ;
		if (!ft_readpoint(&point, z, y, &x0))
			return (FAILURE);
		ft_lstadd_back(map, ft_lstnew(point));
		y++;
	}
	if (errno)
		return (FAILURE);
	return (SUCCESS);
}
