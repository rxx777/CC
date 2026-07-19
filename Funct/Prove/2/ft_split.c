/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:15:03 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/15 13:18:10 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_words(char const *s, char c)
{
	int	i;
	int	c_word;
	int	c_char;

	i = 0;
	c_word = 0;
	c_char = 0;
	while (s[i])
	{
		if (s[i] != c)
			c_char++;
		if ((s[i] == c || s[i + 1] == 0) && c_char > 0)
		{
			c_word++;
			c_char = 0;
		}
		i++;
	}
	return (c_word);
}

static void	b_mtrx(char **mtrx, char const *s, char c)
{
	int	i;
	int	j;
	int	c_char;

	i = 0;
	j = 0;
	c_char = 0;
	while (s[i])
	{
		if (s[i] != c)
			c_char++;
		if ((s[i] == c || s[i + 1] == 0) && c_char > 0)
		{
			mtrx[j] = malloc(sizeof(char) * (c_char + 1));
			j++;
			c_char = 0;
		}
		i++;
	}
	mtrx[j] = 0;
}

static void	fill_mtrx(char **mtrx, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	c_char;

	i = 0;
	j = 0;
	k = 0;
	c_char = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			c_char++;
			mtrx[j][k] = s[i];
			k++;
		}
		if ((s[i] == c || s[i + 1] == 0) && c_char > 0)
		{
			mtrx[j][k] = 0;
			j++;
			c_char = 0;
			k = 0;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mtrx;
	int		words;

	if (!s)
		return (NULL);
	words = c_words(s, c);
	mtrx = (char **)malloc(sizeof(char *) * (words + 1));
	b_mtrx(mtrx, s, c);
	fill_mtrx(mtrx, s, c);
	return (mtrx);
}
/*
int	main(void)
{
	char const	a[] = "ciao a tutti  i belli";
	char	b = ' ';
	char **aa;
	int	j;

	j = 0;
	aa = ft_split(a, b);
	while (aa[j])
	{
		printf("%s \n", aa[j]);
		j++;
	}
*/
/*	while(aa[j])
	{
		free(aa[j]);
		j++;
	}
	free(mtrx[j]);
	free(mtrx);
*/
//}
