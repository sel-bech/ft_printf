/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:28:42 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/12 09:34:59 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;
	int	x;

	x = 0;
	if (nb == -2147483648)
		x += write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		x += ft_putchar('-');
		i = -nb;
		x += ft_putnbr(i);
	}
	else if (nb <= 9)
		x += ft_putchar(nb + '0');
	else
	{
		x += ft_putnbr(nb / 10);
		x += ft_putnbr(nb % 10);
	}
	return (x);
}
