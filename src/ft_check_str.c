/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:52 by javferna          #+#    #+#             */
/*   Updated: 2021/10/13 16:00:25 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_str(va_list ap)
{
	char	*s;
	int	i;

	s = va_arg(ap, char *);
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}
