/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointadd_back_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:05:31 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_pointadd_back(t_point **lst, t_point *new)
{
	t_point	*last;

	if (lst == NULL)
		return ;
	last = ft_pointlast(*lst);
	if (last != NULL)
		last->next = new;
	else
		*lst = new;
}
