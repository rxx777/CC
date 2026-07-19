/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:09:40 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/17 16:10:13 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_n;
	t_list	*new_n;

	if (!lst || !f || !del)
		return (NULL);
	first_n = f(lst->content);
	lst = lst->next;
	while (lst)
	{
		new_n = ft_lstnew(f(lst->content));
		if (!new_n)
		{
			del(new_n->content);
		}
		ft_lstadd_back(&first_n, new_n);
		lst = lst->next;
	}
	return (first_n);
}
