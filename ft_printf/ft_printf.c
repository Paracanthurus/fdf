/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:09:44 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/01 19:17:45 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			len;

	va_start(args, format);
	len = ft_print_main((char *)format, &args);
	va_end(args);
	return (len);
}
