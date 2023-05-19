/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:54:04 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/25 10:51:11 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères 
qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est 
obtenue en appelant malloc(3), et doit donc être libérée avec free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		len;
	int		i;	

	i = 0;
	len = ft_strlen(s);
	new = malloc(len + 1 * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return ((char *)new);
}
