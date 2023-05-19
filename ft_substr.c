/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:46:12 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/30 15:17:58 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s: La chaîne de laquelle extraire la nouvelle chaîne.
start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*new;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup("\0"));
	if (len >= s_len)
		new = (char *)malloc((s_len - start + 1) * sizeof(*s));
	else
		new = (char *)malloc((len + 1) * sizeof(*s));
	if (!new)
		return (NULL);
	j = 0;
	while (s[start + j] && j < len)
	{
		new[j] = s[start + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
