/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:52 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 18:12:18 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int n)
{
	long long	nb;
	int			cnt;

	nb = n;
	cnt = 0;
	if (n < 0)
	{
		cnt += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		cnt += ft_putnbr(nb / 10);
		cnt += ft_putchar(nb % 10 + '0');
	}
	else
		cnt += ft_putchar(nb + '0');
	return (cnt);
}

int	ft_check_int(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	return (ft_putnbr(n));
}

