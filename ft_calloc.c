/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 02:36:18 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/21 03:01:12 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;
    if (size != 0 && count > SIZE_MAX / size)
        return (0);

    p = malloc(count * size);
        if (p == 0)
            return (0);
    ft_bzero(p, size * count);
    return (p);
}
