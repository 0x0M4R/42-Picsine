/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:02:54 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/07 14:06:21 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_invalid(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!base[0] || !base[1])
	{
		return (0);
	}
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int j;
	int i;
	int arr[99];

	j = 0;
	i = 0;
	if (check_invalid(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (base[i])
			i++;
		while (nbr)
		{
			arr[j] = nbr % i;
			nbr = nbr / i;
			j++;
		}
		while (--j >= 0)
			ft_putchar(base[arr[j]]);
	}
}
