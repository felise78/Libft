/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:41:03 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/23 18:41:00 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 La fonction memchr() examine les n premiers octets de la zone mémoire 
 pointée par s à la recherche du caractère c. Le premier octet correspondant 
 à c (interprété comme un unsigned char) arrête l'opération.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (n--)
	{
		if (*s2++ == (unsigned char)c)
			return (s2 - 1);
	}
	return (NULL);
}

/*

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void *found = ft_memchr(data, 57, size);
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return EXIT_SUCCESS;
}*/
