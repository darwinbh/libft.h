/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:03:59 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/19 04:46:00 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;
    
    len = ft_strlen(s);
    while (len >= 0)
    {
        if (s[len] == (char )c)
            return ((char *)s + len);
        len--;
    }
    return (0);
}
