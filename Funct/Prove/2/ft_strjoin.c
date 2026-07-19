/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:24:48 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/09 12:49:20 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	a = malloc(sizeof(char) * (i + j) + 1);
	ft_strlcpy(a, s1, (i + 1));
	ft_strlcpy(&a[i], s2, (j + 1));
	return (a);
}
/*
int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "fghi";
	char	*c;

	c = ft_strjoin(a, b);
	printf("%s", c);
}*/
