/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_and_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:28:06 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

char	**ft_gnl_and_split(int fd, char c)
{
	char	*s;
	char	*s_trimed;
	char	**res;

	s = get_next_line(fd);
	s_trimed = ft_strtrim(s, "\n");
	free(s);
	res = ft_split(s_trimed, c);
	free(s_trimed);
	return (res);
}
