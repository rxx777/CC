/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:19:31 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/10 17:24:50 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
//"libft.h"
//conta parole 
int	countword(char const *s, char c)
{
	int	i;
	int	c_word;
	int	c_char;

	i = 0;
	c_word = 0;
	c_char = 0;
	while(s[i])
	{
		//se non e' c allora incrementa il contatore di caratteri
		if(s[i] != c)
			c_char++;
		//se troviamo c o  il prossimo e' \0 e il contatore di caratteri > 0 allora conta_parole++ 
		if((s[i] == c || s[i+1] == 0) && c_char > 0)
		{
			c_word++;
			c_char = 0;
		}
		i++;
	}
	//torna il numero di parole trovate
	return(c_word);
}

//alloca le righe della matrice
void	build_mtrx(char **mtrx, char const *s, char c)
{
	int	i;
	int	c_char;
	int	j;

	i = 0;
	c_char = 0;
	j = 0;
	while(s[i])
	{
		if(s[i] != c)
			c_char++;
		//invece di aumentare count_word allochiamo la riga della matrice x (c_char +1) 
		if((s[i] == c || s[i+1] == 0) && c_char > 0)
		{
			mtrx[j] = (char *) malloc (sizeof(char) * (c_char + 1));
			j++;
			c_char = 0;
		}
		i++;
	}
	//terminatore della matrice per il while
	mtrx[j] = NULL;
}
// inserisce nella matrice i caratteri delle parole
// a differenza degli altri lavoriamo nel primo if invece che nel secondo, perche' nel primo vediamo carattere per carattere
void	insert_mtrx(char **mtrx, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	c_char;

	i = 0;
	j = 0;
	k = 0;
	c_char = 0;
	while(s[i])
	{
		if(s[i] != c)
		{
			mtrx[j][k] = s[i];
			k++;
			c_char++;
		}
		//terminatore alla riga
		//aumentiamo la riga
		//k = 0 perche' senno' esco dalla matrice
		//azzeriamo anche il contatore dei caratteri
		if((s[i] == c || s[i+1] == 0) && c_char > 0)
		{
			mtrx[j][k] = '\0';
			j++;
			k = 0;
			c_char = 0;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	word_count = countword(s, c);
	char **mtrx = (char **)malloc(sizeof(char *) * (word_count + 1));
	build_mtrx(mtrx, s, c);
	insert_mtrx(mtrx, s, c);
	return(mtrx);
}
/*
int main()
{
	int	j = 0;
	char	*s = " asas sff ttgg   ffgg d   abbiamo avuto";
	char **mtrx = ft_split(s, ' ');
	while(mtrx[j])
	{
		printf("%s\n",mtrx[j]);
		j++;
	}
}*/
