/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:11 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/26 16:54:19 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc((len + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		s3[j++] = s1[i];
	i = 0;
	while (s2[i])
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
/*
#include <stdio.h>

int	main()
{
	char	a[] = "La premiere chaine ";
		char	b[] = "devrait preceder cette deuxieme.";

	printf("%s\n", ft_strjoin(a, b));
}*/
