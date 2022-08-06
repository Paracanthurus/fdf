/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itorgb_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:29:12 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_itorgb(t_color *rgb, int color)
{
	rgb->t = (color & 0xff000000) >> 24;
	rgb->r = (color & 0x00ff0000) >> 16;
	rgb->g = (color & 0x0000ff00) >> 8;
	rgb->b = (color & 0x000000ff);
}