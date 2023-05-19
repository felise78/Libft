/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:43:49 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/07 11:15:46 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locate a substring in a string.
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!find[0] || ((!str || !find) && !n))
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[j] && str[i + j] == find[j] && ((i + j) < n))
			j++;
		if (!find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
