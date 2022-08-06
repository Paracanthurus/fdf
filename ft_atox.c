/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:50:28 by aokubo            #+#    #+#             */
/*   Updated: 2022/07/21 22:54:13 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fdf.h"

int	ft_atox(char *str)
{
	size_t	i;
	int		res;

	i = 0;
	if (ft_strncmp(str, "0x", 2) == 0 || ft_strncmp(str, "0X", 2) == 0)
		i += 2;
	while (ft_isspace(str[i]))
		i++;
	res = 0;
	while (ft_isdigit_hex(str[i]))
	{
		res *= 16;
		if (ft_isdigit(str[i]))
			res += str[i] - '0';
		else if ('a' <= str[i] && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res);
}
