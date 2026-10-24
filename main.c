/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:20:02 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/24 04:00:50 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd;

    fd = open("hello.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return (1);
    ft_putchar_fd('A', fd);
    close(fd);
    return (0);    
}
