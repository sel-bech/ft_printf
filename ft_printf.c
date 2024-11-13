/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:12:13 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/13 09:41:05 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		size;

	if (!s)
		return (-1);
	size = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1])
				size += ft_getconv(s, args, &i);
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (size);
}
