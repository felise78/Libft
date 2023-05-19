/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:13 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/09 18:20:37 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
/*
void	*ft_memset(void *s, int c, size_t n)
{
	char	*tab;
	size_t	len;

	len = ft_strlen(s);
	tab = (char *)s;
	if (n < len)
	{
		while (n)
		{
			*tab = c;
			tab++;
			n--;
		}
	}
	else if (n > len)
	{
		while (len <= n)
		{
			*tab = c;
			tab++;
			len--;
		}
	}
	return (s);
}*/
