/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:36:09 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/27 18:11:50 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	if (write(1, &c, 1) == 1)
		g_c++;
}

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)");
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(long long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_printhex(unsigned long i, char *hex)
{
	if (i > 255)
	{
		ft_printhex((i / 16), hex);
		ft_putchar(hex[i % 16]);
	}
	else
	{
		if (i >= 16)
		{
			ft_putchar(hex[i / 16]);
			ft_putchar(hex[i % 16]);
		}
		else
			ft_putchar(hex[i % 16]);
	}
}
