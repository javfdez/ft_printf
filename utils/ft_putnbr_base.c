/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:05:45 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 23:13:55 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	unsigned long long	len;
	int					cnt;

	cnt = 0;
	len = ft_strlen(base);

	if (nb >= len)
		cnt += ft_putnbr_base(nb / len, base);
	cnt += ft_putchar(base[nb % len]);
	return (cnt);
}
