/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 11:17:41 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/08/13 11:55:44 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

/*
shitty testing main for printf
*/

int		main(void)
{
	int i;
	int j;
	long ii = 5000;
	void *ptr;
	wchar_t unicodestr[] = {1348, 1346, 1345, 1344, 1347, '\0'};
	i = printf("%20.5f\n", -3.6799996665);
	j = ft_printf("%20.5f\n", -3.6799996665);
	printf("libft: %d libc: %d\n", j, i);
	/*i = printf("%C\n", 1348);
	j = ft_printf("%C\n", 1348);
	printf("libft: %d libc: %d\n", j, i);
	ft_printf("{white}white{eoc} {red}%s{eoc} {magenta}%s{eoc} {blue}%s{eoc} {yellow}%s{eoc} {green}green{eoc}\n", 
			"red", "magenta", "blue", "yellow");
*/
	return (0);
}
