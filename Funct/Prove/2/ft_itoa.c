/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:10:23 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/15 14:43:55 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	len(long nu)
{
	int	c_char;

	c_char = 0;
	if (nu == 0)
		c_char = 1;
	while (nu > 0)
	{
		c_char++;
		nu /= 10;
	}
	return (c_char);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	long	nu;
	int		c_char;

	sign = 0;
	nu = n;
	c_char = 0;
	if (n < 0)
	{
		sign = 1;
		nu *= -1;
		c_char++;
	}
	c_char += len(nu);
	s = malloc(sizeof(char) * (c_char + 1));
	s[c_char] = 0;
	while (c_char != sign)
	{
		c_char--;
		s[c_char] = ((nu % 10) + '0');
		nu /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

// int	main(void)
// {
// 	int		n;
// 	char	*a;
// 	int		i;

// 	n = 0;
// 	i = 0;
// 	a = ft_itoa(n);
// 	while (a[i] != 0)
// 		i++;
// 	i++;
// 	write(1, a, i);
// }
