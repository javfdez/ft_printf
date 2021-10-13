/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:52 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 15:37:54 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check(char c, va_list ap)
{
	if (c == 'c')
		return (ft_check_char(ap));
	if (c == 's')
		return (ft_check_str(ap));
	if (c == 'i' || c == 'd')
		return (ft_check_int(ap));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	i;
	int	cnt;

	if (!format)
		return (NULL);
	va_start(ap, format);
	i = -1;
	cnt = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			cnt += ft_check(format[++i], ap);
		else
			cnt = write(1, &format[i], 1);
	}
	va_end(ap);
	return (cnt);
}

