/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:27:10 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/12 09:27:50 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (write(1, "(null)", 6));
	if (*s == '\0')
		return (0);
	i = 0;
	while (*s)
	{
		i += ft_putchar(*s);
		s++;
	}
	return (i);
}
