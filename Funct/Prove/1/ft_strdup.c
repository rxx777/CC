/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:14:52 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/08 12:37:03 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	x;
	char	*a;

	x = ft_strlen(s);
	a = malloc(sizeof(char)*x+1);
	if(a = NULL)
		return(NULL);
	a[x+1] = 0;
	a = ft_strlcpy(a, s, x);
	return(a);
}
