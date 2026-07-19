/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:50:56 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/10 13:05:22 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t s)
{
	void	*a;

	a = malloc(s * nb);
	ft_bzero(a, (s * nb));
	return (a);
}
// cotrollare se overflow overwatch sto in astinenza.

// ft_calloc(5, sizeof(int));
