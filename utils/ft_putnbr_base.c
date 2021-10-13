/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:05:45 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 18:10:06 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	int					cnt;
	int					len;

	cnt = 0;
	len = ft_strlen(base);

	if (nb >= 16)
	{
		cnt += ft_putnbr_base(nb / len, base);
		cnt += ft_putchar(base[nb % len]);
	}
	else
		cnt += ft_putchar(base[nb]);
	return (cnt);
}
