/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:27:41 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/09 16:13:21 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charinstr(char	c, char *s)
{
	while(s)
	{
		if(*s == c)
			return(1)
		else
			s++;
	}
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*a;
//	int	n1;
//	int	n2;
	int	res;
	int	m;
	int	i;
	int	j;

	i = 0;
	m = ft_strlen(s1);
	j = m;
	while(charinstr(s1[i], set) == 1)
		i++;
	while(charinstr(s1[m], set) ==1)
		m--;
	res = j-((j-m) + i);
	a = malloc(sizeof(char)*res + 1);
	ft_strlcpy(a, &s1[i], res);
	return(a);
/*	j = m - n;
	if(s1[i] == set[i])
	{
		if(ft_strncmp(s1, set, (i+1)) == 0)
			i = i+n;
	}
	if(
	malloc(sizeof());
*/
/*	while(s1[i])
	{
		j = 0;
		while(set[j])
		{
			if(set[j] == s1[i])
			{
				i++;
				break;
			}
			else
				j++;
		}
		break;
	}
	n = i;
	while(set[j])
	{
		if(set[j] == s1[m])
		{
			m--;
			break;
		}
		else
			j++;
	}
*/
/*	while(set[i] == s1[i])
		i++;
	while(set[n] == s1[m])
		j--;



		while(s1[i])
		{
			if(s1[i] == set[j])
			{
				j++;
				i++;
			}
			else
				j++;
		}
*/
}
