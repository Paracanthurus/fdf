/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:45:54 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 05:56:51 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_exit(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->img.img);
	mlx_destroy_window(vars->mlx, vars->mlx_win);
	ft_lstclear(&vars->map, ft_pointclear);
	ft_lstclear(&vars->map0, ft_pointclear);

	// メモリリーク確認

	system("leaks fdf");
	exit(EXIT_SUCCESS);
}
