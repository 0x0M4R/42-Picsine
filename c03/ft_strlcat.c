/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:53:07 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/06 16:37:50 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	//size -1 ...
	while (j < size -1 && src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	return (k + size);
}
