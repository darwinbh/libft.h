/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:20:02 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/29 19:06:58 by bbaha            ###   ########.fr       */
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

   
   //FT_LSTADD_FRONT;
   t_list   *x;
   t_list   *new;
   t_list   *jdida;
   t_list *head = 0;
   t_list   *last;
   t_list   *back;
   int   y = 1337;
   int i = 45;
   int z = 2004;
   
   x = ft_lstnew(&y);
   new = ft_lstnew(&i);
   jdida = ft_lstnew("Hello aw9");
   
   
   ft_lstadd_front(&head, x);
   ft_lstadd_front(&head, new);
   ft_lstadd_front(&head, jdida);
   
   printf("%d\n",*(int *)(*x).content);
   printf("%d\n", *(int *)new->content);
   printf("%s\n", (char *)jdida->content);
   printf("%d\n", ft_lstsize(jdida));
   back = ft_lstnew(&z);
   ft_lstadd_back(&head, back);
   last = ft_lstlast(head);
   
   
   printf("%d", *(int *)last->content);
   
}
