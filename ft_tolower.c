/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:34:09 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/23 19:38:16 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
int     main (int ac, char **av)
{
        if (ac > 1)
        {
                printf("%d\n", ft_tolower(*av[1]));
                printf("%d\n", tolower(*av[1]));
        }
        return (0);
}*/
