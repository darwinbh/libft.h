/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:20:02 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/27 03:28:27 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

// char	ft_test(unsigned int i, char c)
// {
//    i += 0;
// 	c = ft_toupper(c);
//    printf("%c",c);
//    return (c);
// }

int main()
{
   // int fd;
   
   // fd = open("hello.py", O_WRONLY | O_CREAT | O_TRUNC, 0644);
   // printf("%d", fd);
   
   // ft_putendl_fd("print('hello world')", 1);
   // ft_putendl_fd("Error!", 2);
   // close(fd);
   // char  s[] = "hello world";
   // printf("\n%s", ft_strmapi(s, ft_test));
   printf("%s\n", ft_itoa(42));
   printf("%s\n", ft_itoa(-572));
   printf("%s\n", ft_itoa(0));
   printf("%s\n", ft_itoa(-2147483648));
}