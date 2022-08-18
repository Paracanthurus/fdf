/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:38:35 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/19 06:26:25 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_initparam(t_param *param)
{
	param->mode = 0;
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (!ft_opfile(argc, argv, &vars.map))
		ft_lstclear(&vars.map, ft_pointclear);
	vars.map0 = ft_lstmap(vars.map, ft_pointcpy, ft_pointclear);
	if (vars.map0 == NULL)
	{
		ft_lstclear(&vars.map, ft_pointclear);

		// メモリリーク確認

		system("leaks fdf");
		exit(EXIT_FAILURE);
	}
	vars.mlx = mlx_init();
	vars.mlx_win = mlx_new_window(vars.mlx, X, Y, "fdf");
	ft_initparam(&vars.param);
	vars.img.img = mlx_new_image(vars.mlx, X, Y);
	vars.img.addr = (mlx_get_data_addr(vars.img.img, &vars.img.bits_per_pixel,
				&vars.img.line_length, &vars.img.endian));
	if (!ft_drawimg(&vars.img, vars.map, vars.map0, &vars.param))
	{
		;
	}
	mlx_put_image_to_window(vars.mlx, vars.mlx_win, vars.img.img, 0, 0);
	mlx_key_hook(vars.mlx_win, ft_key_hook, &vars);
	mlx_hook(vars.mlx_win, 17, 1 << 17, ft_exit, &vars);
	mlx_loop(vars.mlx);
}
