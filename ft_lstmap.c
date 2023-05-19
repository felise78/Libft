/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:37:29 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/02 16:38:12 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*new;

	elem = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			while (elem)
			{
				new = elem->next;
				del(elem->content);
				free(elem);
				elem = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&elem, new);
		lst = lst->next;
	}
	return (elem);
}
