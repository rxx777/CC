/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:37:13 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/02 18:02:00 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int c)
{
	char	*b;
	int		x;

	b = (char *)a;
	x = ft_strlen(a);
	while (x)
	{
		if (b[x] == c)
			return (b + x);
		else
			x--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[] = "ciaociao";
	int	c = 'a';
	printf("%p\n", a);
	printf("%p\n", ft_strrchr(a, c));
	printf("%p", strrchr(a, c));
}*/
