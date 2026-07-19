/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 14:40:14 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/08 15:33:30 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	a[];
	size_t	n;
	
	n = ft_strlen(s);
	if ((n - start) < 1)
		return(NULL);
	a = malloc(sizeof(char)* (n + 1));
	a = ft_strlcpy(a[0], s[start], len)
	return(a);
}

int	main()
{
	char	s[] = "hello" // everybody";
	unsigned int	st = 3;

	printf("%s", ft_substr(s, st, 3)
}
