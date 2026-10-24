/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 02:19:57 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/22 02:56:24 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1_len;
    size_t  s2_len;
    size_t  len;
    char *str;
    
    if (!s1 || !s2)
        return (0);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    len = s1_len + s2_len;
    str = malloc(len + 1);
    if (str == 0)
        return (0);
    ft_memcpy(str, s1, s1_len);
    ft_memcpy(str + s1_len, s2, s2_len);
    str[len] = 0;
    return (str);
}
