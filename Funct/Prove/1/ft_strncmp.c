/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 18:02:17 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/07 11:06:46 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	 i = 0;
	while(s1 && s2 && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return(0);
}
/*
int	main()
{
	char	a[] = "ciaol";
	char	b[] = "ciaoo";
	
	printf("%d", ft_strncmp(a, b, 5));
}*/
