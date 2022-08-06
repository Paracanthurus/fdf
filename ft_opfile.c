/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:46:56 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	ft_opfile(int argc, char **argv, t_list **map)
{
	int	fd;

	if (argc != 2 && argc != 4)
	{
		ft_printf("Usage : %s <filename> [ case_size z_size ]\n", argv[0]);
		return (FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printf("No file %s\n", argv[1]);
		return (FAILURE);
	}
	if (!ft_readmap(map, fd))
	{
		if (errno == 0)
			ft_printf("Found wrong line length. Exiting.\n");
		else
			perror(NULL);
		close(fd);
		return (FAILURE);
	}
	close(fd);
	return (SUCCESS);
}
