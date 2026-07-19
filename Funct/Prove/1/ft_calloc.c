/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:50:56 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/08 14:52:32 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t s)
{
	void	*a;

	//cotrollare se overflow overwatch sto in astinenza.
	*a = malloc(s*nb);
	ft_bzero(a, (s*nb));
	return(a);
}

//ft_calloc(5, sizeof(int));
