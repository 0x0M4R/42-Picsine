/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:31:13 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/11 14:39:22 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *arr;
	int i;
	int diff;

	i = 0;
	if (start >= end)
		return (NULL);
	diff = end - start + 1;
	arr = malloc((sizeof(int) * diff));
	while (diff > 0)
	{
		arr[i] = start;
		start++;
		i++;
		diff--;
	}
	return (arr);
}
