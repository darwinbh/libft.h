/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:24:48 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/22 01:27:30 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	n;
	size_t	j;
	size_t	len2;
	
	if (s == 0)
		return (0);
	n = ft_strlen(s);
	if (n <= start)
	 return (ft_strdup(""));
	len2 = n - start;
	if (len2 > len)
		len2 = len;
	cpy = malloc(len2 + 1);
	if (cpy == 0)
		return (0);
	i = start;
	j = 0;
	while (j < len2)
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	cpy[j] = 0;
	return (cpy);
}
