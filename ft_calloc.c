/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:45:49 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/09 17:18:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Cette fonction alloue un bloc de mémoire en initialisant tous ces octets à la 
valeur 0. Bien que relativement proche de la fonction malloc, deux aspects les 
différencient :
L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors que 
malloc ne modifie pas la zone de mémoire.

Les paramètres d'appels : calloc requière deux paramètres (le nombre d'éléments 
consécutifs à allouer et la taille d'un élément) alors que malloc attend la 
taille totale du bloc à allouer.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (!count || !size)
	{
		new = malloc(1);
		return ((void *)new);
	}
	if ((count * size / size) != count)
		return (NULL);
	new = malloc(count * size);
	if (!new)
		return (NULL);
	ft_bzero(new, count * size);
	return ((void *)new);
}
