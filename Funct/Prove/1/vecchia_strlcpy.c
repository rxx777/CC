/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:14:24 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/02 13:26:38 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_strlcpy(char *d, char *s, size_t n)
{
	int	a;

	a = 0;
	while (n--)
	{
		d[a] = s[a];
		a++;
	}
}
/*
int	main()
{
	char a[] = "ciao";
	char b[] = "helo";

	write (1, a, 4);
	write (1, "\n", 1);
	ft_strlcpy(a, b, 4);
	write (1, a, 4);
}*/
