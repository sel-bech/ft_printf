/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bech <sel-bech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:06:57 by sel-bech          #+#    #+#             */
/*   Updated: 2024/11/13 09:43:53 by sel-bech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_getconv(const char *s, va_list args, int *i);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_puthexadecimal(unsigned long long nb, int c);
int	ft_printf(const char *s, ...);

#endif
