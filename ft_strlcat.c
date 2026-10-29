/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 03:43:04 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/18 17:04:36 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	i;
    size_t	j;
    size_t	k;

    if (!src || !dst)
		return (0);
    i = 0;
    while (src[i])
        i++;
    j = 0;
    while (j < dstsize && dst[j])
        j++;
    if (dstsize  <= j )
        return (dstsize + i);
    k = j;
    i = 0;
    while (j < dstsize - 1 && src[i])
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = 0;
    while (src[i])
        i++;
    return (i + k);
}
