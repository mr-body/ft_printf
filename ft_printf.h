/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:47:39 by waalexan          #+#    #+#             */
/*   Updated: 2024/05/23 12:56:49 by waalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putnbr(long int n);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_printhex(unsigned long n, int type);
int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_printptr(void *ptr);
int	ft_abs(int x);

#endif
