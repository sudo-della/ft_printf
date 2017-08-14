/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 08:46:59 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/08/14 09:28:58 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		places(t_fmt *f)
{
	int p;
	int i;

	p = 1;
	i = 0;
	if (f->prec)
	{
		while (i < f->prec)
		{
			p *= 10;
			i++;
		}
		return (p);
	}
	else
		return (1000000);
}

int				ft_putfloat(va_list ap, t_fmt *f)
{
	double			myfloat;
	signed long int	decipart;
	signed long int	intpart;
	int				chars;

	chars = 0;
	myfloat = va_arg(ap, double);
	if (myfloat < 0)
	{
		ft_putchar('-');
		myfloat *= -1;
		chars++;
	}
	intpart = (signed long int)myfloat;
	ft_putnbr(intpart);
	ft_putchar('.');
	chars += lenbase(intpart, 10) + 1;
	myfloat -= intpart;
	myfloat *= places(f);
	decipart = (signed long int)(myfloat + 0.5);
	ft_putnbr(decipart);
	chars += lenbase(decipart, 10);
	return (chars);
}
