/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:57:52 by hemottu           #+#    #+#             */
/*   Updated: 2022/12/07 10:27:31 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s : La chaine de caracteres sur laquelle iterer.
 * f : La fonction a appliquer a chaque caractere.
 *
 * Applique la fonction 'f' a chaque caractere de la chaine de caracteres 
 * transmise comme argument, et en passant son index comme premier argument.
 *
 * Chaque caractere est transmis par l'adresse a 'f' afin d'etre modifie 
 * si necessaire.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
J'aurais pu proteger la fonction en rajoutant la boucle while dans un if (s).
*/
