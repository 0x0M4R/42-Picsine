/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:53:40 by oabdalla          #+#    #+#             */
/*   Updated: 2021/06/27 18:13:36 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char d, char e, char f)
{
	char g;
	char h;

	g = ',';
	h = ' ';
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (d != '7' || e != '8' || f != '9')
	{
		write(1, &g, 1);
		write(1, &h, 1);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_char(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
