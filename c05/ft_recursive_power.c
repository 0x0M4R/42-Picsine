/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:49:43 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/10 17:21:29 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;

	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0 || (nb < 0 && power == 0))
		return (1);
	i = 1;
	if (power > 0)
	{
		i = ft_recursive_power(nb, power - 1) * nb;
	}
	return (i);
}
