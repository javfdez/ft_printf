/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:52 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 18:15:03 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_pointer(va_list ap)
{
	void	*n;

	n = va_arg(ap, void *);
	write(1, "0x", 2);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}

