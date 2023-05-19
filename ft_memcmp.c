/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:02:30 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/23 19:14:41 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de comparer le contenu de deux blocs de mémoire 
spécifiés par les deux premiers paramètres de la fonction. Le troisième 
paramètre, size, permet de spécifier le nombre d'octets sur lequel comparer 
les deux blocs. Les octets des deux blocs sont comparés deux à deux. 
Tant que les deux octets comparés sont égaux, la fonction passe aux deux 
suivants. Si les deux octets comparés sont différents, alors la fonction 
renvérra lequel des deux blocs est le plus petit en termes de contenu.

Attention, contrairement à strcpy, aucun test sur une éventuelle valeur 
nulle n'est réalisé pour stopper la comparaison. Seule la taille du bloc sera 
considérée.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (s1 == s2 || !n)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
