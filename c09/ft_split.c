/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:06:35 by oabdalla          #+#    #+#             */
/*   Updated: 2021/07/14 15:22:41 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep(charset, str[i]))
		{
			count++;
			while (str[i] && !is_sep(charset, str[i]))
				i++;
			continue;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		arrc;
	int		count;
	char	**arr;

	arr = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	arrc = -1;
	while (str[i])
	{
		count = 0;
		while (str[i] && !is_sep(charset, str[i]) && i++ != -2)
			count++;
		if (count > 0)
		{
			arr[++arrc] = malloc(sizeof(char) * (count + 1));
			ft_strncpy(arr[arrc], str + (i - count), count);
			continue;
		}
		i++;
	}
	arr[count_words(str, charset)] = 0;
	return (arr);
}
