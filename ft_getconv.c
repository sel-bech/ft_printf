/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:14:09 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/13 16:53:10 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getconv(const char *s, va_list args, int *i)
{
	unsigned long long	n;

	*i += 1;
	if (s[*i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s[*i] == 'd' || s[*i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s[*i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s[*i] == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (s[*i] == 'x' || s[*i] == 'X')
		return (ft_puthexadecimal(va_arg(args, unsigned int), s[*i]));
	else if (s[*i] == 'p')
	{
		n = va_arg(args, unsigned long long);
		if (n == 0)
			return (write(1, "(nil)", 5));
		ft_putstr("0x");
		return (ft_puthexadecimal(n, 'p') + 2);
	}
	else if (s[*i] == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%') + ft_putchar(*(s + *i)));
}
