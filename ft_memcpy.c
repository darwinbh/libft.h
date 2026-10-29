/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:49:42 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/22 02:24:57 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t		i;
    unsigned char	*dstt;
    unsigned char	*srcc;
	
	if (!dst && !src)
		return (0);
	dstt = dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
