/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:05:22 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/02 17:36:19 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int c)
{
	char	*b;
	int		i;

	b = (char *)a;
	i = 0;
	while (b[i] != 0)
	{
		if (b[i] == c)
			return (b + i);
		else
			i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[] = "ciao";
	int	c = 'a';
	printf("%p\n", a);
	printf("%p", ft_strchr(a, c));
}*/
