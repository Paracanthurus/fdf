/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:38:35 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 00:22:36 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	t_list	*map;

	if (!ft_opfile(argc, argv, &map))
		exit(EXIT_FAILURE);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, X, Y, "fdf");
	img.img = mlx_new_image(mlx, X, Y);
	img.addr = (mlx_get_data_addr(img.img, &img.bits_per_pixel,
				&img.line_length, &img.endian));
	if (!ft_drawimg(&img, &map))
	{
		;
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_key_hook(mlx_win, ft_key_hook, 0);
	mlx_hook(mlx_win, 17, 1 << 17, ft_click_x_hook, 0);
	mlx_loop(mlx);
}
