/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 03:28:00 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/23 02:12:31 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *empty(void)
{
	char	*str;
		str = malloc(1);
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
}

int find(char s, char *find)
{
	int i;
	
	i = 0;
	while (find[i])
	{
		if (s == find[i])
			return (0);
		i++;
	}
	return (1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	char    *str;
	size_t  i;
	size_t  start;
	size_t  k;
	size_t	len;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && find((char )s1[i], (char *)set) == 0)
		i++;
	len = ft_strlen(s1);
	if (i == len)
		return (empty());
	start = i;
	i = len - 1;
	k = 0;
	while (i  > start && find((char )s1[i], (char *)set) == 0)
	{
		k++;
		i--;
	}
	str = malloc(len -  k - start + 1);
	if (str == 0)
		return (0);
	k = 0;
	while (start <= i)
	{
		str[k] = s1[start];
		k++;
		start++;
	}
	str[k] = 0;
	return (str);
}
