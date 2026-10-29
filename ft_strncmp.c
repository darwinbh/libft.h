/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 04:49:24 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/20 17:16:47 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char    *ss1;
    unsigned char    *ss2;
    size_t i;
    
    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    i = 0;
    while ( i < n - 1 && ss1[i] && ss2[i])
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return (ss1[i] - ss2[i]);
}
