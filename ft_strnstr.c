/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:07:15 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/20 23:11:37 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{

	size_t i;
	size_t k;
	size_t  j;
	
	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		k = 0;
		j = i;
		while (j < len && haystack[j] == needle[k])
		{
			if (needle[k + 1] == '\0')
				return ((char *)haystack + i);
			k++;
			j++;
		}
		i++;
	}
	return (0);
}
