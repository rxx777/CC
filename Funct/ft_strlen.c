/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:37:37 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/02 15:47:45 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	int	n;

	n = 0;
	while (c[n] != '\0')
	{
		n++;
	}
	return (n);
}
/*
int	main()
{
	char	a[] = "hellooo";
	printf("%d", ft_strlen(a));
}*/
