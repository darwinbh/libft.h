/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:47:59 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/29 19:19:24 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tempo;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		 *lst = new;
		return ;
	}
	tempo = *lst;
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = new;
	new->next = 0;
}
