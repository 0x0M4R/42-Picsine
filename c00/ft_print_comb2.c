/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:53:45 by oabdalla          #+#    #+#             */
/*   Updated: 2021/06/27 18:37:00 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_spaces(int x1, int x2)
{
	char d;
	char c;

	c = ',';
	d = ' ';
	if (x1 == 98 && x2 == 99)
	{
	}
	else
	{
		write(1, &c, 1);
		write(1, &d, 1);
	}
}

void	write_space(void)
{
	char s;

	s = ' ';
	write(1, &s, 1);
}

void	write_char(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print_char(int i, int j)
{
	int l;
	int m;

	if (i < 10)
	{
		write_char('0', i + '0');
	}
	if (i > 9)
	{
		l = i / 10;
		m = i % 10;
		write_char(l + '0', m + '0');
	}
	write_space();
	if (j < 10)
	{
		write_char('0', j + '0');
	}
	if (j > 9)
	{
		l = j / 10;
		m = j % 10;
		write_char(l + '0', m + '0');
	}
	write_spaces(i, j);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			if (x != y)
			{
				print_char(x, y);
			}
			y++;
		}
		x++;
	}
}
