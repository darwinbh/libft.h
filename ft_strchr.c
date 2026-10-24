/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:08:36 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/18 01:53:30 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	p;

	p = (char )c;
	i = 0;
	while (s[i])
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i++;
	}
	if (p == s[i])
		return ((char *)&s[i]);
	return (0);
}
