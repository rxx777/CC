/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 16:27:20 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/07 11:40:43 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *b, const char *s, size_t n)
{
//	int	i;
	int	j;

//	i = 0;
	j = 0;
	if(s == NULL)
		return(b);
	while(b[j])
	{
		if(ft_strncmp(&b[j], s, n) == 0)
			return(&b[j]);
		else 
			j++;
	}
	return(NULL);
}

int	main()
{
	char	a[] = "ciao a tutti";
	char	b[] = "tutti";

	printf("%s", ft_strnstr(a, b, 5));
}
