/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:04:43 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/01 19:29:17 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_print_u(unsigned int u, t_format *format)
{
	int		res;
	size_t	len;
	char	*str;

	if (format->precision != -1)
		format->zero = 0;
	len = ft_max_size_t(ft_numlen_u(u, format), format->width);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (-1);
	if (!ft_makestr_u(str, u, len, format))
	{
		ft_safe_free((void **)&str);
		return (-1);
	}
	res = ft_putstr_pf(str, format);
	ft_safe_free((void **)&str);
	return (res);
}
