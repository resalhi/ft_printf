/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:08:05 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/28 18:44:59 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list ap, char type)
{
	if (type == 'c')
		ft_putchar(va_arg(ap, int));
	else if (type == 's')
		ft_putstr(va_arg(ap, char *));
	else if (type == 'p')
	{
		ft_putstr("0x");
		ft_printhex(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (type == 'u')
		ft_putnbr(va_arg(ap, unsigned int));
	else if (type == 'x')
		ft_printhex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		ft_printhex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		ft_putchar('%');
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, s);
	i = 0;
	g_c = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_type(ap, s[i]);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (g_c);
}
