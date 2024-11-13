/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:54:52 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/12 09:54:58 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	x;

	x = 0;
	if (n <= 9)
		x += ft_putchar(n + '0');
	else
	{
		x += ft_putunsigned(n / 10);
		x += ft_putunsigned(n % 10);
	}
	return (x);
}
