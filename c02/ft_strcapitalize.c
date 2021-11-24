/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:48:47 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/13 19:36:32 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		check_if_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		check_if_cap(char a)
{
	return (a >= 'A' && a <= 'Z');
}

int		check_if_low(char b)
{
	return (b >= 'a' && b <= 'z');
}

void	make_low(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (check_if_cap(str[i]) || check_if_low(str[i]))
        {
            if (check_if_cap(str[i]))
			    str[i] += 32;
        }
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
    make_low(str);
	if (check_if_low(str[0]))
	{
		str[0] -= 32;
	}
	i++;
	while (str[i])
	{
		if (!check_if_num(str[i - 1]) && !check_if_low(str[i-1]) && !check_if_cap(str[i-1]) && check_if_low(str[i]))
		{
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
