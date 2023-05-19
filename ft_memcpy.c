/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:46:07 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/07 10:19:32 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;

	if (!dest && !src && n != 0)
		return (NULL);
	s = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(char *)s = *(char *)src;
		s++;
		src++;
		i++;
	}
	return (dest);
}
/*
int main(void) 
{

    int array [] = { 54, 85, 20, 63, 21 };
    int *copy;
    int length;
    
    copy = array;
    ft_memcpy( copy, array, 5);
        
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    return 0;
}*/
