/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:13:29 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/06 11:43:41 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if(s1[i] != s2[i])
			return ((unsigned char s1[i]) - (unsigned char s2[i]));
		else
			i++;
	}
	return ((unsigned char s1[i]) - (unsigned char s2[i]));

}

int	main()
{
	char	a[] = "hello";
	char	b[] = "hello";
	
	printf("%d", ft_memcmp(a, b, 5));
}
