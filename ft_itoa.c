/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:34:58 by bbaha             #+#    #+#             */
/*   Updated: 2026/10/27 07:03:57 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	intlen(long n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nb;
	long	nn;

	nn = n;
	i = 0;
	if (nn <= 0)
	{
		nn = -nn;
		i++;
	}
	i += intlen(nn);
	nb = malloc(i + 1);
	if (!nb)
		return (0);
	nb[i--] = 0;
	while (i >= 0)
	{
		nb[i--] = nn % 10 + '0';
		nn /= 10;
	}
	if (n < 0)
		nb[0] = '-';
	return (nb);
}
