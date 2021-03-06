/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:49:38 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/11 11:11:53 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
	{
		return (1);
	}
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
