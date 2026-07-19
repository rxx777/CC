/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 13:30:59 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/06 09:19:01 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *d, const char *s, size_t n)
{
	int	x;
	int	y;

	y = 0;
	x = ft_strlen(d);
	while (n--)
	{
		d[x] = s[y];
		x++;
		y++;
	}
}
/*
int	main(void)
{
	char	a[] = "abc";
	char	b[] = "def";
	write (1, a, 6);
}*/
