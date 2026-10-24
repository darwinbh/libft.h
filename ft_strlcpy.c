/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 01:58:25 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/18 03:38:31 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
   size_t	i;
   size_t	j;

   if (!src || !dst)
   	return (0);
   j = 0;
   while (src[j])
		j++;
   if (dstsize == 0)
		return (j);
   i = 0;
   while (i < dstsize - 1 && src[i])
   {
		dst[i] = src[i];
		i++;
   }
   dst[i] = 0;
   return (j);
}
