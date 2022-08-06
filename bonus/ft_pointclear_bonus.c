/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointclear_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:29:20 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:14:56 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf_bonus.h"

void	ft_pointclear(void *point)
{
	t_point	*next_node;
	t_point	*lst;

	lst = point;
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		next_node = lst->next;
		free(lst);
		lst = next_node;
	}
}
