/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:44:06 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/23 19:34:02 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

// int	ft_key_hook(int key, void *p)
int	ft_key_hook(int key)
{
	ft_printf("Key in Win : %d\n", key);
	if (key == 65307)
	{

		// メモリリーク確認

		system("leaks fdf");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
