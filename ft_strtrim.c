/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:52:41 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/02 16:47:41 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

static int	ft_get_start(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i] && (ft_is_in_set(s[i], set) == 1))
		i++;
	return (i);
}

static int	ft_get_end(char const *s, char const *set)
{
	int	end;

	end = ft_strlen(s) - 1;
	while (end >= 0 && ft_is_in_set(s[end], set) == 1)
	{
		if (end == 0)
			return (0);
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;
	int		len;

	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	len = end - start + 1;
	if (len < 0)
		len = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!str || !s1)
		return (NULL);
	while (s1[start] && start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
