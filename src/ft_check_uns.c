/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:52 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 18:17:05 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_uns(va_list ap)
{
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	return (ft_putnbr_base(n, "0123456789"));
}

