/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 03:24:22 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/24 03:07:12 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				i++;
			}
			j++;
		}
		else
			i++;
	}
	return (j);
}

static	size_t	len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	char	**cleanup(char **s, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

static	char	**cpy(const char *s, char **str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = ft_substr(s, i, len(s + i, c));
			if (!str[j])
				return (cleanup(str, j));
			j++;
			i += len(s + i, c);
		}
		else
			i++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = malloc((count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	return (cpy(s, str, c));
}
