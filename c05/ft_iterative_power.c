/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:49:46 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/06 18:49:47 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0 || (nb < 0 && power == 0))
		return (1);
	i = 1;
	while (power > 0)
	{
		i = nb * i;
		power--;
	}
	return (i);
}
