/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:48:40 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/13 19:29:19 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;
	int		c1;
	int		c2;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			c1 = hexa[str[i] / 16];
			c2 = hexa[str[i] % 16];
			write(1, "\\", 1);
			write(1, &c1, 1);
			write(1, &c2, 1);
		}
		i++;
	}
}
