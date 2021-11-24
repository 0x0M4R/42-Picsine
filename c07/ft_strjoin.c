/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:31:05 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/11 14:43:45 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_getlength(int size, char **strs, char *sep)
{
	int i;
	int j;
	int size_sep;
	int count;

	size_sep = 0;
	while (sep[size_sep])
		size_sep++;
	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		if (i != 0)
			count += size_sep;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_getlength(size, strs, sep));
	i = 0;
	str[0] = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
