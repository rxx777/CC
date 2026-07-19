/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:27:41 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/15 13:15:33 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charinstr(char c, const char *s)
{
	if (c == '\0')
		return (0);
	while (*s != 0)
	{
		if (*s == c)
			return (1);
		else
			s++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, const char *set)
{
	char	*a;
	int		res;
	int		len_s1;
	int		i;
	int		j;

	i = 0;
	len_s1 = ft_strlen(s1);
	j = len_s1;
	while (charinstr(s1[i], set))
		i++;
	while (charinstr(s1[len_s1 - 1], set) == 1 && len_s1 != -1)
		len_s1--;
	res = j - ((j - len_s1) + i);
	a = malloc(sizeof(char) * res + 1);
	ft_strlcpy(a, &s1[i], (res + 1));
	return (a);
}
/*
int	main(void)
{
	char		c[] = "ciao a tutti";
	const char	set[] = "cit";
	char		*a;

	a = ft_strtrim(c, set);
	printf("%s", a);
}*/
