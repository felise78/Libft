/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:20 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/02 16:08:24 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*avdernier;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			avdernier = ft_lstlast(*lst);
			avdernier->next = new;
		}
	}
}
