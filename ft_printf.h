/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:12:33 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/27 15:52:30 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		g_c;
int		ft_printf(const char *s, ...);
int		ft_type(va_list ap, char type);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long long int n);
void	ft_printhex(unsigned long i, char *hex);

#endif
