/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:38:38 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/22 01:23:46 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t 	len;
	char	*cpy;
	
	len = ft_strlen(s1);
	cpy = malloc(len + 1);
	if (cpy == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		cpy[i] = (char )s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
