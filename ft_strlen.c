/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:46:42 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/22 14:50:54 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main (int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d\n", ft_strlen(av[1]));
		printf("%ld\n", strlen(av[1]));
	}
	return (0);
}*/
