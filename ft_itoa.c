/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:01:16 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/30 11:25:05 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n == -2147483648)
		len = 11;
	else if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;

	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[len--] = '\0';
	if (n == 0)
		tab[0] = '0';
	if (n < 0)
	{	
		tab[0] = '-';
		n = n * -1;
	}
	while (n > 0 && len >= 0)
	{
		tab[len--] = '0' + (n % 10);
		n = n / 10;
	}
	return (tab);
}
