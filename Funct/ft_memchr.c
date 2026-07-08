/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 09:48:12 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/03 10:11:30 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	size_t	i;

	a = (unsigned char *) s;
	 i= 0;
	while (i < n && a[i] != 0)
	{
		if (a[i] == c)
			return(s + i)
		else
			i++;
	}
	return(NULL);
}
