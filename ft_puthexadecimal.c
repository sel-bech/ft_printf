/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:14:44 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/13 09:44:36 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal(unsigned long long nb, int c)
{
	int		re;
	char	*base;

	re = 0;
	if (c == 'x' || c == 'p')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		re += ft_puthexadecimal(nb / 16, c);
		re += ft_puthexadecimal(nb % 16, c);
	}
	else
	{
		re += ft_putchar(base[nb % 16]);
	}
	return (re);
}
