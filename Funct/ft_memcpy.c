/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:05:14 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/02 15:50:36 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	b = (unsigned char *)d;
	while (i <= n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	x[] = "ciao";
	char	*y = "helo";

	ft_memcpy(x, y, 4);
	write (1, x, 4);
}*/
