/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:48:28 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/13 18:25:27 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d;

	d = 0;
	while (src[d] != '\0')
	{
		d++;
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1) && d > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d);
}
