/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:44:06 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 06:01:52 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

int	ft_key_hook(int key, t_vars *vars)
{
	ft_printf("Key in Win : %d\n", key);
	if (key == 65307)
		ft_exit(vars);
	else if (key == 49)
		vars->param.mode = 0;
	else if (key == 50)
		vars->param.mode = 1;
	mlx_destroy_image(vars->mlx, vars->img.img);
	vars->img.img = mlx_new_image(vars->mlx, X, Y);
	vars->img.addr = (mlx_get_data_addr(vars->img.img, &vars->img.bits_per_pixel,
				&vars->img.line_length, &vars->img.endian));
	if (!ft_drawimg(&vars->img, vars->map, vars->map0, &vars->param))
	{
		;
	}
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img.img, 0, 0);
	return (0);
}
