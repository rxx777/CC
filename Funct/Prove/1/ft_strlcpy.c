/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:14:24 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/09 11:59:39 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	i = 0;
	if (n < 1)
		return(x);
	while (src[i] && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return(x);
}
/*
int	main()
{
	char a[] = "ciaoo";
	char b[] = "helo";

	write (1, a, 5);
	write (1, "\n", 1);
	ft_strlcpy(a, b, 2);
	printf("%s", a);
//	write (1, a, 4);
//	printf("%u", strlcpy(a, b, 4));
}*/
